#include <iostream>
#include <fstream>
#include <string>
#include "print.h"
using namespace std;

void print(int x) {
    string filename;
    string line;
    //detect which file is printed
    { if (x==1){
        filename = "drawing_one.txt";
        }
     else{
        filename = "drawing_two.txt";
         }
    }
    ifstream file(filename);//open the file
    //if the file can be opened successfully
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    //if the file cannot be opened
    else {
        cout << "Unable to open file " << filename << endl;
    }
}
