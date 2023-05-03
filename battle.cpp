#include <iostream>
#include <windows.h>
#include "wordle.h"
#include <string>
#include "shop.h"
#include <map>
#include "print.h"
#include <string>
#include <time.h>

using namespace std;


//Are Sleep changed?
//Are cls removed?

// Function mainui is to display the mainui to player. Input will be an int, output will be an int
int mainui() {
	int choice = 0;
	string input;
	cout << "================================================================================" << endl; // length = 80
	cout << "                                                                                " << endl;
	cout << " █████╗ ██████╗  █████╗ ██╗  ██╗███████╗███████╗ █████╗ ██████╗  █████╗ ███████╗" << endl;
	cout << "██╔══██╗██╔══██╗██╔══██╗██║  ██║██╔════╝██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝" << endl;
	cout << "███████║██████╔╝██║  ╚═╝███████║█████╗  █████╗  ██║  ██║██████╔╝██║  ╚═╝█████╗  " << endl;
	cout << "██╔══██║██╔══██╗██║  ██╗██╔══██║██╔══╝  ██╔══╝  ██║  ██║██╔══██╗██║  ██╗██╔══╝  " << endl;
	cout << "██║  ██║██║  ██║╚█████╔╝██║  ██║███████╗██║     ╚█████╔╝██║  ██║╚█████╔╝███████╗" << endl;
	cout << "╚═╝  ╚═╝╚═╝  ╚═╝ ╚════╝ ╚═╝  ╚═╝╚══════╝╚═╝      ╚════╝ ╚═╝  ╚═╝ ╚════╝ ╚══════╝" << endl;
	cout << "                                                                                " << endl;
	cout << "================================================================================" << endl;
	cout << "                            What are you going to do?" << endl;
	cout << "================================================================================" << endl;
	cout << "|              1.Shop                   |                2.Battle              |" << endl;
	cout << "================================================================================" << endl;
	while (true) {
		cout << "Enter your choice (1 or 2): " << endl;
		getline(cin, input);
		try {
			choice = stoi(input);
			if ((choice == 1) || (choice == 2)) {
				if (choice == 1) {
					cout << "Your Choice is Shop.";
				}
				else {
					cout << "Your Choice is Battle.";
				}
				Sleep(2000);
				return choice;
			}
			else {
				cout << "Invalid choice. Please enter 1, 2 or 3." << endl;
			}
		}
		catch (const std::invalid_argument& ia) {
			cout << "Invalid choice. Please enter 1, 2 or 3." << endl;
		}
	}

}

// this is use to print out title of the game. No input or output.
void init_intro() {
	string temp;
	cout << "================================================================================" << endl; // length = 80
	cout << "                                                                                " << endl;
	cout << " █████╗ ██████╗  █████╗ ██╗  ██╗███████╗███████╗ █████╗ ██████╗  █████╗ ███████╗" << endl;
	cout << "██╔══██╗██╔══██╗██╔══██╗██║  ██║██╔════╝██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝" << endl;
	cout << "███████║██████╔╝██║  ╚═╝███████║█████╗  █████╗  ██║  ██║██████╔╝██║  ╚═╝█████╗  " << endl;
	cout << "██╔══██║██╔══██╗██║  ██╗██╔══██║██╔══╝  ██╔══╝  ██║  ██║██╔══██╗██║  ██╗██╔══╝  " << endl;
	cout << "██║  ██║██║  ██║╚█████╔╝██║  ██║███████╗██║     ╚█████╔╝██║  ██║╚█████╔╝███████╗" << endl;
	cout << "╚═╝  ╚═╝╚═╝  ╚═╝ ╚════╝ ╚═╝  ╚═╝╚══════╝╚═╝      ╚════╝ ╚═╝  ╚═╝ ╚════╝ ╚══════╝" << endl;
	cout << "                                                                                " << endl;
	cout << "================================================================================" << endl;
	//Sleep(5000);
	cout << "Welcome! Our Saviour!" << endl;
	//Sleep(2000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
	cout << "This country is now under invasion from Monsters!!!" << endl;
	//Sleep(2000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
	cout << "Please Help us with your super power!" << endl;
	//Sleep(2000);
	cout << "<Press Enter to continue.>";
	cin.ignore();
}  

// Function battleui is to display the battleui to player. Input will be an int, output will be an int
int battleui() {
	string input;
	int choice;
	// drawing by Jan at inital state
	cout << "=====================================================" << endl;
	cout << "              What are you going to do?" << endl;
	cout << "=====================================================" << endl;
	cout << "|        1.Defence        |          2.Attack       |" << endl;
	cout << "=====================================================" << endl;
	while (true) {
		cout << "Enter your choice (1 or 2): " << endl;
		getline(cin, input);
		try {
			choice = stoi(input);
			if ((choice == 1) || (choice == 2)) {
				if (choice == 1) {
					cout << "You choose to Defence this round.";
				}
				else {
					cout << "You choose to Attack this round.";
				}
				Sleep(2000);
				return choice;
			}
			else {
				cout << "Invalid choice. Please enter 1, 2 or 3." << endl;
			}
		}
		catch (const std::invalid_argument& ia) {
			cout << "Invalid choice. Please enter 1, 2 or 3." << endl;
		}
	}
}

//Function use to display and calculate damage to player. Input by refrence of HP and designed damage, no output.
void defenceui(int &hp,int damage) {
	// drawing by Jan at inital state
	int success = 0;
	string temp;
	success = ((double)rand()) / RAND_MAX;
	if (success >= 0.5) {
		cout << "Defence Success!" << endl;
		cout << "Damage deal by 0.5!" << endl;
		hp -= damage*0.5;
		cout << "<Press Enter to continue.>";
		cin >> temp;
		cin.ignore();
	}
	else {
		cout << "Defence Failed..." << endl;
		Sleep(1000);
		hp -= damage;
		cout << "<Press Enter to continue.>";
		cin >> temp;
		cin.ignore();
	}
}

void attackui(int atk, int enemyhp) {

}

int battle() {
	srand(time(NULL));
	int gold = 0, atk = 10, hp = 100, passive_skill = 0;
	int level = 1;
	int wordle_round = 0;
	map<int, int> enemyhp;
	enemyhp[1] = 30; enemyhp[2] = 40; enemyhp[3] = 50; enemyhp[4] = 70; enemyhp[5] = 100; enemyhp[6] = 120; enemyhp[7] = 150; enemyhp[8] = 160; enemyhp[9] = 160; enemyhp[10] = 200;
	map<int, int> enemyatk;
	enemyatk[1] = 10; enemyatk[2] = 15; enemyatk[3] = 20; enemyatk[4] = 20; enemyatk[5] = 30; enemyatk[6] = 30; enemyatk[7] = 40; enemyatk[8] = 40; enemyatk[9] = 45; enemyatk[10] = 50;
	init_intro();
	system("cls");
	system("clear");
	while (level <10) {
		int round_enemy_hp = enemyhp[level];
		int round_player_hp = hp;
		if (mainui()) {
			shop(gold, atk, hp, passive_skill);
		}
		else {
			while (true) {
				int round_atk = atk;
				if (round_enemy_hp <= 0) {
					cout << "You Win Level " << level << " !";
					break;
				}
				else if (round_player_hp <= 0) {
					cout << "You Lose..." << endl;
					break;
				}
				if (battleui() == 1) {//defence
				defenceui(hp,enemyatk[level]);
				}
				else {//attack
					wordle_round = wordle();
					switch (wordle_round) {
					case 1:
						round_atk *= 2;
						break;
					case 2:
						round_atk *= 1.5;
						break;
					case 3:
						round_atk *= 1.3;
						break;
					case 4:
						round_atk *= 1.2;
						break;
					case 5:
						round_atk *= 1.1;
						break;
					default:
						round_atk *= 1;
					}
					attackui(round_atk, round_enemy_hp);
				}
			}
			
		}
	}
	
	

	return 0;
}