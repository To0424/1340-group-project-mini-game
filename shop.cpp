#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include "shop.h"

using namespace std;

string showshop(int &gold, int &ATK, int &HP, int count_passiveskill){
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 
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
    cout << "Your ATK: "<< ATK << endl;
    cout << "Your HP: "<< HP << endl;
    string temp = "False";
    if (count_passiveskill) {
        temp = "True";
    }
    cout << "Passive Skill: " << temp << endl;
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
    cout << "============================================================================================" << endl;

    //int choice;//
    string choice;
    while (true) {
        cout << "Enter your choice (1, 2, 3 or 4): " << endl;
        cin >> choice;
        if ((choice == "1") || (choice == "2") || (choice == "3") || (choice == "4")) 
        {
            return choice;
        }
        else {
            cout << "Invalid choice. Please enter 1, 2, 3 or 4." << endl;
        }
        
        
    }
    

}

int shop(int &gold, int &ATK, int &HP,int &count_passiveskill,int &count_ATK,int &count_HP) {//remember here change the name and add the parameters which are gold, ATK and HP into it. Also, case 3 which is skill don't know u want how to do.
    //int gold = 100;
    //int ATK = 5;
    //int HP = 100;
    //int passive_skill = 0;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 
    int choice;
    
    string input, ans,a;
    while (true) 
    {

        choice = stoi(showshop(gold,ATK,HP,count_passiveskill));
        
        if (choice == 4)
        {
            cout << endl << "you are going back..."<< endl;
            Sleep(1000);
            system("clear");
            system("cls");
            break;
        }
    switch (choice) 
    {
        case 1:
            int pay1;
            pay1 = abs(count_ATK - 10) * 67 + 20;
            cout <<endl << "============================================================================================" << endl;
            cout << "This upgrade will consume you " << pay1 <<" Golds"<<endl;
            cout << "You have " << count_ATK << " times left" <<endl;
            cout << "Are you ready to upgrade your attack damage? (Y/N)" <<endl;
            cin >> ans;
            if (ans == "Y" || ans == "Yes" || ans == "yes" || ans == "YES" || ans == "y")
            {
                if (count_ATK == 0 && gold >= pay1) 
                {
                    
                    cout <<endl << "============================================================================================" << endl;
                    SetConsoleTextAttribute(hConsole, 12);
                    cout << "You're too powerful! You cannot upgrade your attack damage anymore!!"<<endl;
                    SetConsoleTextAttribute(hConsole, 15);
                    Sleep(3000);
                    break;
                }
                else if (count_ATK <= 10 && count_ATK >= 1 && gold >= pay1) 
                {
                    cout <<endl << "============================================================================================" << endl;
                    gold = gold - pay1;
                    ATK = ATK +5;
                    --count_ATK; 


                    Sleep(200);
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << endl << "You";Sleep(200);cout<<" feel";Sleep(500);cout <<".";Sleep(500);cout <<".";Sleep(500);cout <<". ";
                    Sleep(200);cout << "something";Sleep(500);cout <<".";Sleep(500);cout <<".";Sleep(500);cout <<". ";
                    Sleep(200);cout <<"You're";Sleep(200);cout<<" filled with";
                    Sleep(500);cout <<".";Sleep(500);cout <<".";Sleep(500);cout <<". ";Sleep(100);
                    SetConsoleTextAttribute(hConsole, 12);
                    cout<<"POWER." <<endl;
                    SetConsoleTextAttribute(hConsole, 10);
                    Sleep(1000);
                    cout << "Your attack damage has incrased!" << endl;
                    cout << count_ATK << " times upgrade left!"<<endl;
                    SetConsoleTextAttribute(hConsole, 15);
                    Sleep(3000);
                    
                    break;
                }
                else
                {
                Sleep(200);
                cout<<"Sorry, you don't have enough gold to pay for it..."<<endl;
                Sleep(5000);
                break;
                }
            
            }
            else if (ans == "N" || ans == "No" || ans == "no" || ans == "NO" || ans == "n")
            {
                
                break;
            }
            else
            {
                cout <<endl << "============================================================================================" << endl;
                cout <<endl<< "Invalid input, Please enter Y or N next time"<<endl;
                Sleep(2000);
                break;
            }


            
        case 2:
            int pay2;
            pay2 = abs(count_HP - 10) * 67 + 20;

            cout <<endl << "============================================================================================" << endl;
            cout << "This upgrade will consume you " << pay2 <<" Golds"<<endl;
            cout << "You have " << count_HP << " times left" <<endl;
            cout << "Are you ready to upgrade your HP? (Y/N)" <<endl;
            cin >> ans;
            if (ans == "Y" || ans == "Yes" || ans == "yes" || ans == "YES" || ans == "y")
            {
            if (count_HP == 0 && gold >= pay2) 
            {
                cout <<endl << "============================================================================================" << endl;
                SetConsoleTextAttribute(hConsole, 12);
                cout << "You're too Strong! You cannot upgrade your HP anymore!!"<<endl;
                SetConsoleTextAttribute(hConsole, 15);
                Sleep(3000);
                break;
            }
            else if (count_HP <= 10 && count_HP >= 1 && gold >= pay2) 
            {
                cout <<endl << "============================================================================================" << endl;
                gold = gold - pay2;
                HP = HP+10;
                --count_HP;


                Sleep(200);
                SetConsoleTextAttribute(hConsole, 10);
                cout << endl << "You";Sleep(200);cout<<" feel";Sleep(500);cout <<".";Sleep(500);cout <<".";Sleep(500);cout <<". ";
                Sleep(200);cout << "something";Sleep(500);cout <<".";Sleep(500);cout <<".";Sleep(500);cout <<". ";
                Sleep(200);cout <<"You're";Sleep(200);cout<<" filled with";
                Sleep(500);cout <<".";Sleep(500);cout <<".";Sleep(500);cout <<". ";Sleep(100);
                SetConsoleTextAttribute(hConsole, 14);
                cout << "STRENGTH."<<endl;
                SetConsoleTextAttribute(hConsole, 10);
                Sleep(1000);
                cout << "Your maximum HP has increased!" << endl;
                cout << count_HP << " times upgrade left!"<<endl;
                SetConsoleTextAttribute(hConsole, 15);
                Sleep(3000);
                break;
            }
            else
                {
                Sleep(200);
                cout<<"Sorry, you don't have enough gold to pay for it..."<<endl;
                Sleep(5000);
                break;
                }

            }
            else if (ans == "N" || ans == "No" || ans == "no" || ans == "NO" || ans == "n")
            {

                break;
            }
            else
            {
                cout <<endl << "============================================================================================" << endl;
                cout <<endl<< "Invalid input, Please enter Y or N next time"<<endl;
                Sleep(2000);
                break;
            }
        case 3:
            cout <<endl << "============================================================================================" << endl;
            cout << "This upgrade will consume you 500 Golds"<<endl;
            cout << "Are you ready to receive your Passive Skill? (Y/N)" <<endl;
            cin >> ans;
            if (ans == "Y" || ans == "Yes" || ans == "yes" || ans == "YES" || ans == "y")
            {
            if (count_passiveskill == 1  && gold >= 500) 
            {
                cout <<endl << "============================================================================================" << endl;
                SetConsoleTextAttribute(hConsole, 12);
                cout << "You already had it..."<<endl;
                SetConsoleTextAttribute(hConsole, 15);
                Sleep(3000);
                break;
            }
            else if (count_passiveskill == 0 && gold >= 500) 
            {
                cout <<endl << "============================================================================================" << endl;
                gold = gold - 500;
                ++count_passiveskill;
                SetConsoleTextAttribute(hConsole, 10);
                cout << "You got a passive skill:HP Recover now!"<<endl;
                SetConsoleTextAttribute(hConsole, 15);
                Sleep(3000);
                break;

            }
            else
                {
                Sleep(200);
                cout<<"Sorry, you don't have enough gold to pay for it..."<<endl;
                Sleep(5000);
                break;
                }
            }
            else if (ans == "N" || ans == "No" || ans == "no" || ans == "NO" || ans == "n")
            {
                break;
            }
            else
            {
                cout <<endl << "============================================================================================" << endl;
                cout <<endl<< "Invalid input, Please enter Y or N next time"<<endl;
                Sleep(2000);
                break;
            }
    
            
            
    }
    }

    return 0;
}
