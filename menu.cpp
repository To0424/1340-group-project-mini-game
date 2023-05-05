#include <iostream>
#include <string>
#include <unistd.h>
#include "menu.h"
#include <cstdlib>

using namespace std;

//Are sleep changed?

int menu() {                      //This function have no input, but the return type is integer (1 or 0)
                                  //Allow user to choose whether to start the game or quit.

    system("cls");
    system("clear");

   cout << "\033[1m";

    cout << "Welcome to Archeforce!" << endl << endl;
    cout << "=======================" <<endl;
    cout << "||";
    cout << "\033[1;32m";
    cout << "   1. Start Game   ";
    cout << "\033[0m";
    cout << "||" << endl;
    cout << "=======================" <<endl;
    cout << "||" ;
    cout << "\033[1;32m";
    cout << "     2. Quit       " ;
    cout << "\033[0m";
    cout << "||" << endl;
    cout << "=======================" <<endl;

    int choice;
    string input;
    while (true) 
    {
        cout << "Enter your choice (1 or 2): ";
        cin >> input;
        if ((input == "1") || (input == "2")) 
        {
            choice = stoi(input);
            break;
        }
      else 
        {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
    }

    switch (choice) 
{
        case 1:
            cout << endl << "Starting game..." << endl;
            sleep(3); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
            return 1;
        case 2:
            cout << endl << "Quitting game..." << endl;
            sleep(3); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
            return 0;
    
}

}
