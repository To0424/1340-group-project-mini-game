#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int shop() {

    system("cls");

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 

    cout << "Welcome to SHOP!" << endl << endl;
    cout << "============================================================================================" <<endl;

    SetConsoleTextAttribute(hConsole, 12); 

    cout <<"             //>                                                                  " <<endl;
    cout <<"()          //---------------------------------------------------------(        "<<endl;
    cout <<"(*)OXOXOXOXO(*>        1.Incrase ATTACK DAMAGE                          \\      "<<endl;
    cout <<"()          \\\\-----------------------------------------------------------)      "<<endl;
    cout <<"             \\\\>                                                                  "<<endl;
    
    SetConsoleTextAttribute(hConsole, 15); 

    cout << "============================================================================================" <<endl;

    SetConsoleTextAttribute(hConsole, 2); 
cout << ",d88b.d88b,"<< "                                            "<<"          ,d88b.d88b,          "<<endl;
cout << "88888888888"<< "                                            "<<"          88888888888           "<<endl;
cout << "`Y8888888Y'"<< "                  2. Incrase HP             "<<"          `Y8888888Y'             "<<endl;
cout << "  `Y888Y'  "<< "                                            "<<"            `Y888Y'             "<<endl;
cout << "    `Y'    "<< "                                            "<<"              `Y'            "<<endl;
    SetConsoleTextAttribute(hConsole, 15); 

    cout << "============================================================================================" <<endl;
    cout << "3. Back"<<endl;

    int choice;
    string input;
    /*do {
        cout << "Enter your choice (1, 2 or 3): ";
        cin >> choice;

        if (choice != 1 && choice != 2 && choice != 3) {
            cout << "Invalid choice. Please enter 1, 2 or 3." << endl;
        }
    } while (choice != 1 && choice != 2 && choice != 3);*/
    while (true) {
        cout << "Enter your choice (1, 2 or 3): " << endl;
        getline(cin, input);
        try {
            choice = stoi(input);
            break;
        }
        catch (const std::invalid_argument& ia) {
            cout << "Invalid choice. Please enter 1, 2 or 3." << endl;
        }
    }

    switch (choice) {
        case 1:
            cout << endl << "Starting game..." << endl;

            break;
        case 2:
            cout << endl << "Quitting game..." << endl;

            break;
        case 3:
            cout << endl << "Going Backing..." << endl;
            break;
    }

    return 0;
}
