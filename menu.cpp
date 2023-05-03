#include <iostream>
#include <windows.h>

using namespace std;

int menu() {

    system("cls");

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 

    cout << "Welcome to My Game!" << endl << endl;
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
    do {
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        if (choice != 1 && choice != 2) {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
    } while (choice != 1 && choice != 2);

    switch (choice) {
        case 1:
            cout << endl << "Starting game..." << endl;

            break;
        case 2:
            cout << endl << "Quitting game..." << endl;

            break;
    }

    return 1;
}
