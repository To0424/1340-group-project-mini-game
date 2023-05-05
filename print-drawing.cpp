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
    if (x==1)
        {filename = "player_being_attack.txt";}//open the drawing that player is being attacked
    else if (x==2)
        {filename="player lose.txt";}//open the drawing that player lose
    else if (x==3)
        {filename="player ready fight.txt";}//open the drawing that the player is going to play the game
    else if (x==4)
        {filename="player_attack.txt";}//open the drawing that play is attacked
    else if (x==5)
        {filename="player defense.txt";}//open the drawing that player defense the attack
    else if (x==6)
        {filename="player win.txt";}//open the drawing that player win one level
    else if (x==7)
        {filename="player-win-final.txt";}//open the drawing that player win all level
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
