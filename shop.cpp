#include <iostream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include "shop.h"

using namespace std;

string showshop(int &gold, int &ATK, int &HP, int count_passiveskill){ //This function will show what you can buy in the shop, what you choose to buy(1,2,3) and 4 is going back //
                                                                       //and allow you to go back previous page.//
                                                                       //User input is gold, your attack damge, your hp, and the counter of passive skill . 
                                                                       //The output is the choice which user inputted in string.    
    system("clear");
 
    cout << "\033[1;34m";
    cout <<endl;
    cout <<"                      .oooooo..o ooooo   ooooo   .oooooo.   ooooooooo.                         "<<endl;
    cout <<"                     d8P'    `Y8 `888'   `888'  d8P'  `Y8b  `888   `Y88.                       "<<endl;
    cout <<"                     Y88bo.       888     888  888      888  888   .d88'                       "<<endl;
    cout <<"                     `\"Y8888o.   888ooooo888  888      888  888ooo88P'                       "<<endl; 
    cout <<"                         `\"Y88b  888     888  888      888  888                           "<<endl;    
    cout <<"                     oo     .d8P  888     888  `88b    d88'  888                          "<<endl;     
    cout <<"                     8\"\"88888P'  o888o   o888o  `Y8bood8P'  o888o                        "<<endl<<endl;
    cout<< "\033[0m";

    cout << "============================================================================================" <<endl;

    cout << "You have: "<< "\033[1;33m" <<gold << "\033[0m" << " gold"<< endl;
    cout << "Your ATK: "<< "\033[1;31m" <<ATK << "\033[0m" << endl;
    cout << "Your HP: "<< "\033[1;32m" <<HP << "\033[0m" << endl;
    string temp = "False";
    if (count_passiveskill) {
        temp = "True";
    }
    cout << "\033[1;32m" << "Passive Skill: " << temp <<  "\033[0m" << endl;
    
 
    cout << "============================================================================================" <<endl;



    cout<< "\033[1;31m";

    cout <<"             //>                                                                  " <<endl;
    cout <<"()          //---------------------------------------------------------(        "<<endl;
    cout <<"(*)OXOXOXOXO(*>           1.Incrase ATTACK DAMAGE (Max:10)              \\      "<<endl;
    cout <<"()          \\\\-----------------------------------------------------------)      "<<endl;
    cout <<"             \\\\>                                                                  "<<endl;
    
    cout<< "\033[0m";

    cout << "============================================================================================" <<endl;

    cout<< "\033[1;32m";

    cout << ",d88b.d88b,"<< "                                                   "<<"         ,d88b.d88b,          "<<endl;
    cout << "88888888888"<< "                  2. Incrase HP                    "<<"         88888888888           "<<endl;
    cout << "`Y8888888Y'"<< "                     (MAX:10)                      "<<"         `Y8888888Y'             "<<endl;
    cout << "  `Y888Y'  "<< "        3. Passive skill: HP Recover (Max: 1)      "<<"           `Y888Y'             "<<endl;
    cout << "    `Y'    "<< "                                                   "<<"             `Y'            "<<endl;
    cout<< "\033[0m";

    cout << "============================================================================================" <<endl<<endl;
    cout << "\033[1m";
    cout << "                               4. Back                                                      "<<endl<<endl;
    cout << "============================================================================================" << endl;

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

int shop(int &gold, int &ATK, int &HP,int &count_passiveskill,int &count_ATK,int &count_HP) {
    
                                                            //This function is a confirm page for what you have chose in the shop list.
                                                            //allow you to confirm the price of everything in shop
                                                            //Also telling user the maximum times of buying the item.
                                                            //You are also allowed to go back to shop list, if you enter wrong your choice in shop list.
                                                            //The input is player gold, attack damage, Hp, counter of passiveskill,upgrade of Attack and HP.
                                                            
                                                            //The output return a integer. 
                                                            //And what it actually do is to change your status after you bought the thing by pass by reference.

    int choice;
    string input, ans,a;
    while (true) 
    {

        choice = stoi(showshop(gold,ATK,HP,count_passiveskill));
        
        if (choice == 4)
        {
            cout << endl << "you are going back..."<< endl;
            sleep(1);
            system("clear");
            break;
        }
    switch (choice) 
    {
        case 1:
            int pay1;
            pay1 = abs(count_ATK - 10) * 67 + 20;
            cout <<endl << "============================================================================================" << endl;
            cout << "This upgrade will consume you " << "\033[1;33m" << pay1 <<" Golds"<< "\033[0m"<<endl;
            cout << "You have " << count_ATK << " times left" <<endl;
            cout << "Are you ready to upgrade your attack damage? (Y/N)" <<endl;
            cin >> ans;
            if (ans == "Y" || ans == "Yes" || ans == "yes" || ans == "YES" || ans == "y")
            {
                if (count_ATK == 0 && gold >= pay1) 
                {
                    
                    cout <<endl << "============================================================================================" << endl;
                    cout << "\033[1;31m";
                    cout << "You're too powerful! You cannot upgrade your attack damage anymore!!"<<endl;
                    cout << "\033[0m";
                    sleep(3);
                    break;
                }
                else if (count_ATK <= 10 && count_ATK >= 1 && gold >= pay1) 
                {
                    cout <<endl << "============================================================================================" << endl;
                    gold = gold - pay1;
                    ATK = ATK +5;
                    --count_ATK; 


                    sleep(0.2);
                    cout << "\033[1m";
                    cout << endl << "You";sleep(0.2);cout<<" feel";sleep(0.5);cout <<".";sleep(0.5);cout <<".";sleep(0.5);cout <<". ";
                    sleep(0.2);cout << "something";sleep(0.5);cout <<".";sleep(0.5);cout <<".";sleep(0.5);cout <<". ";
                    sleep(0.2);cout <<"You're";sleep(0.2);cout<<" filled with";
                    sleep(0.5);cout <<".";sleep(0.5);cout <<".";sleep(0.5);cout <<". ";sleep(0.1);
                    cout << "\033[1;31m";
                    cout<<"POWER." <<endl;
                    cout << "\033[1m";
                    sleep(1);
                    cout << "Your attack damage has incrased!" << endl;
                    cout << count_ATK << " times upgrade left!"<<endl;
                    cout << "\033[0m";
                    sleep(3);
                    
                    break;
                }
                else
                {
                sleep(0.2);
                cout<<"Sorry, you don't have enough gold to pay for it..."<<endl;
                sleep(5);
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
                sleep(2);
                break;
            }


            
        case 2:
            int pay2;
            pay2 = abs(count_HP - 10) * 67 + 20;

            cout <<endl << "============================================================================================" << endl;
            cout << "This upgrade will consume you " << "\033[1;33m" << pay2 <<" Golds"<< "\033[0m" <<endl;
            cout << "You have " << count_HP << " times left" <<endl;
            cout << "Are you ready to upgrade your HP? (Y/N)" <<endl;
            cin >> ans;
            if (ans == "Y" || ans == "Yes" || ans == "yes" || ans == "YES" || ans == "y")
            {
            if (count_HP == 0 && gold >= pay2) 
            {
                cout <<endl << "============================================================================================" << endl;
                cout << "\033[1;32m";
                cout << "You're too Strong! You cannot upgrade your HP anymore!!"<<endl;
                cout << "\033[0m";
                sleep(3);
                break;
            }
            else if (count_HP <= 10 && count_HP >= 1 && gold >= pay2) 
            {
                cout <<endl << "============================================================================================" << endl;
                gold = gold - pay2;
                HP = HP+10;
                --count_HP;


                sleep(0.2);
                cout << "\033[1m";
                cout << endl << "You";sleep(0.2);cout<<" feel";sleep(0.5);cout <<".";sleep(0.5);cout <<".";sleep(0.5);cout <<". ";
                sleep(0.2);cout << "something";sleep(0.5);cout <<".";sleep(0.5);cout <<".";sleep(0.5);cout <<". ";
                sleep(0.2);cout <<"You're";sleep(0.2);cout<<" filled with";
                sleep(0.5);cout <<".";sleep(0.5);cout <<".";sleep(0.5);cout <<". ";sleep(0.1);
                cout << "\033[1;32m";
                cout << "STRENGTH."<<endl;
                cout << "\033[1m";
                sleep(1);
                cout << "Your maximum HP has increased!" << endl;
                cout << count_HP << " times upgrade left!"<<endl;
                cout << "\033[0m";
                sleep(3);
                break;
            }
            else
                {
                sleep(0.2);
                cout<<"Sorry, you don't have enough gold to pay for it..."<<endl;
                sleep(5);
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
                sleep(2);
                break;
            }
        case 3:
            cout <<endl << "============================================================================================" << endl;
            cout << "This upgrade will consume you " << "\033[1;33m" << "500 Golds"<< "\033[0m" <<endl;
            cout << "Are you ready to receive your Passive Skill? (Y/N)" <<endl;
            cin >> ans;
            if (ans == "Y" || ans == "Yes" || ans == "yes" || ans == "YES" || ans == "y")
            {
            if (count_passiveskill == 1 && gold >= 500) 
            {
                cout <<endl << "============================================================================================" << endl;
                cout << "\033[1;32m";
                cout << "You already had it..."<<endl;
                cout << "\033[0m";
                sleep(3);
                break;
            }
            else if (count_passiveskill == 0 && gold >= 500) 
            {
                cout <<endl << "============================================================================================" << endl;
                gold = gold - 500;
                ++count_passiveskill;
                cout << "\033[1;32m";
                cout << "You got a passive skill:HP Recover now!"<<endl;
                cout << "\033[0m";
                sleep(3);
                break;

            }
            else
                {
                sleep(0.2);
                cout<<"Sorry, you don't have enough gold to pay for it..."<<endl;
                sleep(5);
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
                sleep(2);
                break;
            }
    
            
            
    }
    }

    return 0;
}
