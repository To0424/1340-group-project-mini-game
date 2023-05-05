#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;

int number_in_wordlist = 0;

/*This part is to get the target word from the word list.txt file, which is used guess. All words from the list is in uppercase*/

string getWord() {
    ifstream file ("word_list.txt");
    vector<string> word_list;
    int number_of_word = 0;

    string input;
    while(file >> input) {
        word_list.push_back(input);
        number_of_word++;
    }
    file.close();

    number_in_wordlist = rand() % (number_of_word);
    //cout << number_in_wordlist << endl;
    word_list.shrink_to_fit();
    return word_list[number_in_wordlist];

}
/* number_of_matched is a vector storing the matched position of the guessing word which the correct matched position
will be 1, incorrect matched position will be 0. */

int check_matched(string word, string targetWord, vector<int> &number_of_matched){
    int not_matched = 0;
    for(int i = 0; i < word.length(); i++) {
        if(word[i] == targetWord[i]) {
            number_of_matched[i] = 1;
        } else {
            for(int j = 0; j < word.length(); j++){
                if(word[i] == targetWord[j] && j != i){
                    number_of_matched[i] = 2;
                    break;
                }
            }
            not_matched++;
        }
    }
    if(not_matched > 0) {
        return 1;
    }

    return 0;
}

/* to check whether the players input is valid */

bool isValid(string word, string targetWord) {

    return word.length() == targetWord.length() &&
    word.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos;

}

/* to make players' input word as uppercase so that any input word can be used. */

void toUpperCase(string &word) {
    for(int i = 0; i < word.length(); i++) {
        word[i] = toupper(word[i]);
    }
}

/* to print out players' input word and to show how many words is matched according to number_of_matched vector. The matched word will be shown in green colour. */

void print_output(string word, vector<int> &matched) {

    cout << "\033[33m";
    cout << "//////////////////////////////////////" <<endl;
    cout << "/                                    /" << endl;
    cout << "/";
    cout << "\033[0m";
    for(int i = 0; i < matched.size(); i++) {
        if(matched[i] == 1) {
            cout << "\033[32m";
            cout << " | " << word[i] << " | ";
        } else if(matched[i] == 0){
            cout << "\033[31m";
            cout << " | " << word[i] << " | ";
        } else if(matched[i] == 2) {
            cout << "\033[33m";
            cout << " | " << word[i] << " | ";
        }
    }
    cout << "\033[33m";
    cout << " / " << endl;
    cout << "/                                    /" << endl;
    cout << "//////////////////////////////////////" <<endl;
    cout << "\033[0m";



}


int wordle() {
    srand(time(NULL));

    system("clear");

    for(int i = 0; i < 6; i++){
        int attempt = 6, tried=0;
        vector<int> number_of_matched = {0, 0, 0, 0, 0};
        string targetWord = getWord();
        string player_input;

        cout << "\033[31m";
        cout << "//////////////////////////////////////" <<endl;
        cout << "/      Can You Guess the Word ?      /" << endl;
        cout << "//////////////////////////////////////" <<endl;
        cout << "\033[0m";

        while(tried < attempt) {

            cin >> player_input;
            while(player_input.length()!=5){
                cout << "5 characters are required." << endl;
                cin >> player_input;
            }
            toUpperCase(player_input);

            int correct = check_matched(player_input, targetWord, number_of_matched);

            if(isValid(player_input, targetWord)) {

                if(correct == 0) {
                    print_output(player_input, number_of_matched);
                    cout << endl;
                    cout << "\033[32m";
                    cout << "//////////////////////////////////////" <<endl;
                    cout << "/      correct! Attack is ready!     /" << endl;
                    cout << "//////////////////////////////////////" <<endl;
                    cout << endl;
                    cout << "\033[0m";

                    if(tried < 6) {
                        return tried+1;
                        break;
                    }
                        // change here to adopt on main,shop,etc
                }

                print_output(player_input, number_of_matched);
                cout << endl;
                cout << "//////////////////////////////////////" << endl;
                cout << "/         Guess Remaining: " << 5-tried << "         /" << endl;
                cout << "//////////////////////////////////////" << endl;

                for(int i = 0; i < number_of_matched.size(); i++) {
                    number_of_matched[i] = 0;
                }

                tried++;

            } else {

            cout << "Invalid input!" << endl;

                }
        }

        if(tried >= attempt) {
            return -1;
        }

        //number_in_wordlist++; /* moving to the next target word in word list */ use random! done.

    }


    return 0;
}
