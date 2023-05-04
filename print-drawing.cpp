#include<iostream>
#include <fstream>
#include <string>
#include "print-drawing.h"
using namespace std;

void print(int &x) {
    string filename;
    string line;
    //detect which file is printed
    { 
    if (x==1){filename = "player_being_attack";}
    else if (x==2){filename="player lose.txt";}
    else if (x==3){filename="player ready fight.txt";}
    else if (x==4){filename="player_attack.txt";}
    else if (x==5){filename="player defense.txt";}
    else if (x==6){filename="player win.txt";}
    else if (x==7){filename="player-win-final.txt";}
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
