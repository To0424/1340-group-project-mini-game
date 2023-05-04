#include<iostream>
#include<print-drawing.h>
#include <fstream>
#include <string>
#include "print-drawing.h"
using namespace std;

void print(int x) {
    string filename;
    string line;
    //detect which file is printed
    { 
    if (x==1){filename = "player_being_attack";}
    elif (x==2){filename="player lose.txt";}
    elif (x==3){filename="player ready fight.txt";}
    elif (x==4){filename="player_attack.txt";}
    elif (x==5){filename="player defense.txt";}
    elif (x==6){filename="player win.txt";}
    elif (x==7){filename="player-win-final.txt";}
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
