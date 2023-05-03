#include <iostream>
#include <string>
#include <windows.h>
#include "menu.h"

using namespace std;

//Are Sleep changed?

int menu() {

    system("cls");
    system("clear");

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 

    cout << "Welcome to Archeforce!" << endl << endl;
    cout << "=======================" <<endl;
    cout << "||";
    SetConsoleTextAttribute(hConsole, 2); 
    cout << "   1. Start Game   ";
    SetConsoleTextAttribute(hConsole, 15); 
    cout << "||" << endl;
    cout << "=======================" <<endl;
    cout << "||" ;
    SetConsoleTextAttribute(hConsole, 2); 
    cout << "     2. Quit       " ;
    SetConsoleTextAttribute(hConsole, 15); 
    cout << "||" << endl;
    cout << "=======================" <<endl;

    int choice;
    string input;
    while (true) {
        cout << "Enter your choice (1 or 2): " << endl;
        getline(cin, input);
        try {
            choice = stoi(input);
            if ((choice == 1) || (choice == 2)) {
                break;
            }
            else {
                cout << "Invalid choice. Please enter 1 or 2." << endl;
            }
        }
        catch (const std::invalid_argument& ia) {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
    }
    /*do {
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        if (choice != 1 && choice != 2) {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
    } while (choice != 1 && choice != 2); */

    switch (choice) {
        case 1:
            cout << endl << "Starting game..." << endl;
            Sleep(3000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
            break;
        case 2:
            cout << endl << "Quitting game..." << endl;
            Sleep(3000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
            break;
    }

    return 1;
}
