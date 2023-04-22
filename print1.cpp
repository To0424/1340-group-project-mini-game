#include <iostream>
#include <fstream>
#include <string>
#include "print.h"
using namespace std;

void print(int x) {
    string filename ;
    { if (x==2){flename=drawing_one.txt}else{filename=drawing_two.txt}}
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file " << filename << endl;
    }
}
