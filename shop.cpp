#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    system("cls");

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 
    int gold = 10;
    SetConsoleTextAttribute(hConsole, 11);
    cout <<endl;
    cout <<"                      .oooooo..o ooooo   ooooo   .oooooo.   ooooooooo.                         "<<endl;
    cout <<"                     d8P'    `Y8 `888'   `888'  d8P'  `Y8b  `888   `Y88.                       "<<endl;
    cout <<"                     Y88bo.       888     888  888      888  888   .d88'                       "<<endl;
    cout <<"                     `\"Y8888o.   888ooooo888  888      888  888ooo88P'                       "<<endl; 
    cout <<"                         `\"Y88b  888     888  888      888  888                           "<<endl;    
    cout <<"                     oo     .d8P  888     888  `88b    d88'  888                          "<<endl;     
    cout <<"                     8\"\"88888P'  o888o   o888o  `Y8bood8P'  o888o                        "<<endl<<endl;
    SetConsoleTextAttribute(hConsole, 15);

    cout << "============================================================================================" <<endl;
    SetConsoleTextAttribute(hConsole, 6); 
    cout << "You have: "<< gold << " gold"<< endl;
    SetConsoleTextAttribute(hConsole, 15); 
    cout << "============================================================================================" <<endl;



    SetConsoleTextAttribute(hConsole, 12); 

    cout <<"             //>                                                                  " <<endl;
    cout <<"()          //---------------------------------------------------------(        "<<endl;
    cout <<"(*)OXOXOXOXO(*>           1.Incrase ATTACK DAMAGE (Max:10)              \\      "<<endl;
    cout <<"()          \\\\-----------------------------------------------------------)      "<<endl;
    cout <<"             \\\\>                                                                  "<<endl;
    
    SetConsoleTextAttribute(hConsole, 15); 

    cout << "============================================================================================" <<endl;

    SetConsoleTextAttribute(hConsole, 2); 
    cout << ",d88b.d88b,"<< "                                                     "<<"          ,d88b.d88b,          "<<endl;
    cout << "88888888888"<< "                  2. Incrase HP                      "<<"          88888888888           "<<endl;
    cout << "`Y8888888Y'"<< "                     (MAX:10)                        "<<"          `Y8888888Y'             "<<endl;
    cout << "  `Y888Y'  "<< "        3. Passive skill: HP Recover (Max: 1)        "<<"            `Y888Y'             "<<endl;
    cout << "    `Y'    "<< "                                                     "<<"              `Y'            "<<endl;
    SetConsoleTextAttribute(hConsole, 15); 

    cout << "============================================================================================" <<endl<<endl;
    cout << "                               4. Back                                                      "<<endl<<endl;

    int choice,count_ATK,count_HP,count_passiveskill;
    string input, ans;
    while (true) {
        cout << "Enter your choice (1, 2 or 3): " << endl;
        getline(cin, input);
        try {
            choice = stoi(input);
            if ((choice == 1) || (choice == 2) || (choice == 3)) {
                break;
            }
            else {
                cout << "Invalid choice. Please enter 1, 2 or 3." << endl;
            }
        }
        catch (const std::invalid_argument& ia) {
            cout << "Invalid choice. Please enter 1, 2 or 3." << endl;
        }
    }

    switch (choice) 
    {
        case 1:
            cout <<endl << "============================================================================================" << endl;
            cout << "Are you ready to uprade your attack damage? (Y/N)" <<endl;
            cin >> ans;
            if (ans == "Y" || ans == "Yes" || ans == "yes" || ans == "YES" || ans == "y")
            {
            if (count_ATK = 0) 
            {
                cout << "You're too powerful! You cannot upgrade your attack damage anymore!!"<<endl;
                break;
            }
            else 
            {
                cout << endl << "You feel... something...You're filled with POWER." <<endl;
                cout << "Your attack damage has incrased!" << endl;
                cout << count_ATK << "times upgrade left!"<<endl;
                break;
            }
            }
            else if (ans == "N" || ans == "No" || ans == "no" || ans == "NO" || ans == "n")
            {
                break;
            }


            
        case 2:

            cout <<endl << "============================================================================================" << endl;
            cout << "Are you ready to uprade your HP? (Y/N)" <<endl;
            cin >> ans;
            if (ans == "Y" || ans == "Yes" || ans == "yes" || ans == "YES" || ans == "y")
            {
            if (count_HP = 0) 
            {cout << "You're too powerful! You cannot upgrade your HP anymore!!"<<endl;
            break;
            }
            else 
            {
                cout << endl << "You feel... something...You're filled with STRENGTH."<<endl;
                cout << "Your maximum HP has increased!" << endl;
                cout << count_HP << "times upgrade left!"<<endl;
                break;
            }
            }
            else if (ans == "N" || ans == "No" || ans == "no" || ans == "NO" || ans == "n")
            {
                break;
            }

        case 3:
            cout <<endl << "============================================================================================" << endl;
            cout << "Are you ready to get your Passive Skill? (Y/N)" <<endl;
            cin >> ans;
            if (ans == "Y" || ans == "Yes" || ans == "yes" || ans == "YES" || ans == "y")
            {

            if (count_passiveskill = 1){cout << "You already had it..."<<endl;}
            else if (count_passiveskill = 0) {cout << "You got a passive skill:HP Recover now!"<<endl;}
            }
            else if (ans == "N" || ans == "No" || ans == "no" || ans == "NO" || ans == "n")
            {
                break;
            }
            
            
    }

    return 0;
}
