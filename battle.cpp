#include <iostream>
#include <windows.h>
#include "wordle.h"
#include <string>
#include "shop.h"
#include <map>
#include "print.h"
#include <string>
#include <time.h>
#include <cmath>

using namespace std;

//Are Sleep changed?
//Are cls removed?

// this is use to print out title of the game. Execute once only. No input or output.
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
	system("cls");
	system("clear");
	cout << "Tutorial:" << endl;
	Sleep(1000);
	cout << "This game is a combination of Wordle and RPG game." << endl;
	Sleep(500);
	cout << "You will be asked to choose go to Battle or Shop before entering Battle." << endl;
	Sleep(500);
	cout << "Please be reminded that once you entered Battle, you are not able to enter shop until you win/lose the current level." << endl;
	Sleep(500);
	cout << "There will be TEN level in total." << endl;
	Sleep(500);
	cout << "Upgrades such as Attack and HP will be avaliable in shop. Make sure to check them out if you find it is diffcult to defeat the boss!" << endl;
	Sleep(500);
	cout << "<Press Enter to continue.>";
	cin.ignore();
	system("cls");
	system("clear");
	cout << "After Entering Battle,You are able to choose 'Attack' or 'Defence'." << endl;
	Sleep(500);
	cout << "You will have to finish a wordle game before attacking the enemy." << endl;
	Sleep(500);
	cout << "Damage will depends on how fast you guess the word." << endl;
	Sleep(500);
	cout << "Defence is helpful when you are on low HP as you will get healed each round!" << endl;
	Sleep(500);
	cout << "<Press Enter to continue.>";
	cin.ignore();
	system("cls");
	system("clear");
	cout << "Wish you Good luck, adventurer." << endl;
	Sleep(500);
	cout << "<Press Enter to continue.>";
	cin.ignore();
	system("cls");
	system("clear");

} 

// Function mainui is to display the option "shop" and "Battle" to player. Input will be an int, output will be an int
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
	cout << "|                           What are you going to do?                          |" << endl;
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
					cout << "Your Choice is Shop." << endl;
				}
				else {
					cout << "Your Choice is Battle." << endl;
				}
				Sleep(2000);
				return choice;
			}
			else {
				cout << "Invalid choice. Please enter 1 or 2." << endl;
			}
		}
		catch (const std::invalid_argument& ia) {
			cout << "Invalid choice. Please enter 1 or 2." << endl;
		}
	}

}

// Function battleui is to display the option "Defence" and "Attack" to player. Input will be an int, output will be an int
int battleui(int playerhp, int enemyhp,int enemyatk) {
	string input;
	int choice;
	// drawing by Jan at inital state
	cout << "=====================================================" << endl;
	cout << "|             What are you going to do?             |" << endl;
	cout << "=====================================================" << endl;
	cout << "|        1.Defence        |          2.Attack       |" << endl;
	cout << "=====================================================" << endl;
	cout << "|                   Current HP: " << playerhp << "                 |" << endl;
	cout << "=====================================================" << endl;
	cout << "|         Enemy HP: " << enemyhp << "     |   Enemy ATK: " << enemyatk << "        |" << endl;
	cout << "=====================================================" << endl;
	while (true) {
		cout << "Enter your choice (1 or 2): " << endl;
		getline(cin, input);
		try {
			choice = stoi(input);
			if ((choice == 1) || (choice == 2)) {
				if (choice == 1) {
					cout << "You choose to Defence this round." << endl;
				}
				else {
					cout << "You choose to Attack this round." << endl;
				}
				Sleep(2000);
				return choice;
			}
			else {
				cout << "Invalid choice. Please enter 1 or 2." << endl;
			}
		}
		catch (const std::invalid_argument& ia) {
			cout << "Invalid choice. Please enter 1 or 2." << endl;
		}
	}
}

//Function use to display and calculate damage to player. Input by refrence of HP and designed damage, no output.
void defenceui(int &p_hp,int damage) {
	// drawing by Jan at inital state
	float success = 0;
	success = ((double)rand()) / RAND_MAX;
	if (success >= 0.5) {
		cout << "Defence Success!" << endl;
		cout << "Damage received reduced 50%!" << endl;
		p_hp -= damage*0.5;
		cout << "<Press Enter to continue.>";
		cin.ignore();
		system("cls");
		system("clear");
	}
	else {
		cout << "Defence Failed..." << endl;
		Sleep(1000);
		p_hp -= damage;
		cout << "<Press Enter to continue.>";
		cin.ignore();
		system("cls");
		system("clear");
	}
}

//Function use to display and calculate damage to enemy. Input by refrence of HP and designed damage, no output.
void attackui(int atk, int &enemyhp) {
	//Jane drawing of attack
	cout << "You deal " << atk << " damage to enemy!" << endl;
	Sleep(1000);
	enemyhp -= atk;
	cout << "Enemy current HP: " << enemyhp << endl;
	Sleep(1000);
	cout << "<Press Enter to continue.>";
	cin.ignore();
	system("cls");
	system("clear");
}

//Function use to display and calculate damage to player. Input by refrence of HP and designed damage, no output.
void attackbyenemyui(int &p_hp, int damage) {
	// drawing by Jan at inital state
	cout << "Enemy dealt " << damage << " damages to you." << endl;
	Sleep(1000);
	p_hp -= damage;
	cout << "<Press Enter to continue.>";
	cin.ignore();
	system("cls");
	system("clear");
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
	while (level < 10) {// how enemy attack?
		int round_enemy_hp = enemyhp[level];
		int round_player_hp = hp;
		int shop_or_atk = mainui();
		int turn = 0;
		int def_or_atk = 0;
		if (shop_or_atk == 1) {
			shop(gold, atk, hp, passive_skill);
		}
		if (shop_or_atk == 2) {
			system("cls");
			system("clear");
			while (true) {
				int round_atk = atk;
				// check is player won
				if (round_enemy_hp <= 0) {
					cout << "You Win Level " << level << " !";
					level++;
					Sleep(1000);
					cout << "<Press Enter to continue.>";
					cin.ignore();
					system("cls");
					system("clear");
					break;
				} //check is player lose
				else if (round_player_hp <= 0) {
					cout << "You Lose..." << endl;
					Sleep(1000);
					cout << "<Press Enter to continue.>";
					cin.ignore();
					system("cls");
					system("clear");
					break;
				}
				if (turn == 0) {
					//check is play bought recover skill
					if (passive_skill) {
						int recover_hp = 0;
						if (hp * 0.2 + round_player_hp < hp) {
							recover_hp = hp * 0.2 + round_player_hp;
						}
						else {
							recover_hp = hp - round_player_hp;
						}
						cout << "Passive Skill!" << endl;
						Sleep(1000);
						cout << "HP is recovered by " << recover_hp << " !" << endl;
						round_player_hp += recover_hp;
						Sleep(1000);
						cout << "<Press Enter to continue.>";
						cin.ignore();
						system("cls");
						system("clear");
					}
					if (round_player_hp == hp) {
						system("cls");
						system("clear");
					}else if (round_player_hp + 10 >= hp) {
						round_player_hp += hp - round_player_hp;
						cout << "You feel refreshing!" << endl;
						Sleep(500);
						cout << "Your HP is increased by " << hp - round_player_hp << " !" << endl;
					}else {
						round_player_hp += 10;
						cout << "You feel refreshing!" << endl;
						Sleep(500);
						cout << "Your HP is increased by 10!" << endl;
					}
					def_or_atk = battleui(round_player_hp,round_enemy_hp,enemyatk[level]);
					if (def_or_atk == 2) {//attack
						wordle_round = wordle();
						switch (wordle_round) {
						case 1:
							round_atk = ceil(round_atk * 2);
							break;
						case 2:
							round_atk = ceil(round_atk * 1.5);
							break;
						case 3:
							round_atk = ceil(round_atk * 1.3);
							break;
						case 4:
							round_atk = ceil(round_atk * 1.2);
							break;
						case 5:
							round_atk = ceil(round_atk * 1.1);
							break;
						default:
							round_atk *= 1;
						}
						if (wordle_round != -1) {
							attackui(round_atk, round_enemy_hp);
						}
						else {
							cout << "You failed to perform your desire action this round." << endl;
							Sleep(1000);
							attackbyenemyui(round_player_hp, enemyatk[level]);
						}
					}
					turn = 1;
				}
				if (turn == 1) {
					turn = 0;
					cout << "Enemy's Turn!" << endl;
					if (def_or_atk == 1) {
						defenceui(hp, enemyatk[level]);
					}
					attackbyenemyui(round_player_hp, enemyatk[level]);
				}
			}
		}
	}
	return 0;
}