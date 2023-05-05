#include <iostream>
#include "wordle.h"
#include <string>
#include "shop.h"
#include <map>
#include <string>
#include <ctime>
#include <cmath>
#include "print-drawing.h"
#include <unistd.h>

using namespace std;

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
	sleep(5);
	cout << "Welcome! Our Saviour!" << endl;
	cout << endl;
	sleep(2);
	cout << "This country is now under invasion from Monsters!!!" << endl;
	cout << endl;
	sleep(2); 
	cout << "Please Help us with your super power!" << endl;
	cout << endl;
	sleep(2);
	cin.ignore();
	cout << "<Press Enter to continue>";
	cin.ignore();
	system("clear");
	cout << "Tutorial:" << endl;
	cout << endl;
	sleep(1);
	cout << "This game is a combination of Wordle and Rogue-like RPG game." << endl;
	cout << endl;
	sleep(1);
	cout << "This means once you die, you have to play it again." << endl;
	cout << endl;
	sleep(1);
	cout << "All your play data will be Gone." << endl;
	cout << endl;
	sleep(1);
	cout << "So make your decision wisely." << endl;
	cout << endl;
	sleep(1);
	cout << "You will be asked to choose go to Battle or Shop before entering Battle." << endl;
	cout << endl;
	sleep(1);
	cout << "Please be reminded that once you entered Battle, you are not able to enter shop until you win/lose the current level." << endl;
	cout << endl;
	sleep(1);
	cout << "There will be TEN level in total." << endl;
	cout << endl;
	sleep(1);
	cout << "Upgrades such as Attack and HP will be avaliable in shop." << endl;
	cout << endl;
	sleep(1);
	cout << "Make sure to check them out if you find it is diffcult to defeat the boss!" << endl;
	cout << endl;
	sleep(1);
	cout << "<Press Enter to continue>";
	cin.ignore();
	system("clear");
	cout << "After Entering Battle,You are able to choose 'Attack' or 'Defence'." << endl;
	cout << endl;
	sleep(1);
	cout << "You will have to finish a wordle game before attacking the enemy." << endl;
	cout << endl;
	sleep(1);
	cout << "Damage will depends on how fast you guess the word." << endl;
	cout << endl;
	sleep(1);
	cout << "Defence is helpful when you are on low HP as you will get healed each round!" << endl;
	cout << endl;
	sleep(1);
	cout << "<Press Enter to continue>";
	cin.ignore();
	system("clear");
	cout << "Wish you Good luck, Adventurer." << endl;
	cout << endl;
	sleep(1);
	cout << "<Press Enter to continue>";
	cin.ignore();
	system("clear");

} 

// Function mainui is to display the option "shop" and "Battle" to player. Input will be an int, output will be an int
int mainui(int level) {
	string choice;
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
	cout << "|                                 Level: " << level << "                                     |" << endl;
	cout << "================================================================================" << endl;
	cout << "|              1.Shop                   |                2.Battle              |" << endl;
	cout << "================================================================================" << endl;
	while (true) {
		cout << "Enter your choice (1 or 2): " << endl;
		cin >> choice;
		if ((choice == "1") || (choice == "2"))
		{
			return stoi(choice);
		}
		else {
			cout << "Invalid choice. Please enter 1 or 2." << endl;
		}	
	}
}

// Function battleui is to display the option "Defence" and "Attack" to player. Input will be multiple integers, output will be an int
int battleui(int playerhp, int enemyhp,int enemyatk,int fullhp,int level) {
	string input;
	int choice,printx;
	printx = 3;
	print(printx);
	cout << "=====================================================" << endl;
	cout << "             What are you going to do?             " << endl;
	cout << "=====================================================" << endl;
	cout << "        1.Defence                  2.Attack       " << endl;
	cout << "=====================================================" << endl;
	cout << "        Current HP: " << playerhp << "      Current Level: " << level << "     " << endl;
	cout << "=====================================================" << endl;
	cout << "        Enemy HP: " << enemyhp << "         Enemy ATK: " << enemyatk << "        " << endl;
	cout << "=====================================================" << endl;
	while (true) {
		cout << "Enter your choice (1 or 2): " << endl;
		cin >> input;
		if ((input == "1") || (input == "2")) {
			choice = stoi(input);
			if (choice == 1) {
				cout << "You choose to Defence this round." << endl;
				sleep(2);
				system("clear");
			}
			else {
				cout << "You choose to Attack this round." << endl;
			}
			sleep(2);
			return choice;
		}else{
			cout << "Invalid choice. Please enter 1 or 2." << endl;
		}
	}
}

//Function use to display and calculate damage to player. No input, output integer.
int defenceui() {
	int printx;
	printx = 5;
	print(printx);
	float success = 0;
	success = ((double)rand()) / RAND_MAX;
	if (success >= 0.5) {
		cout << "Defence Success!" << endl;
		cout << "Damage received reduced 50%!" << endl;
		cout << "<Press Enter to continue>";
		cin.ignore();
		cin.ignore();
		system("clear");
		return 1;
	}
	else {
		cout << "Defence Failed..." << endl;
		sleep(1);
		cout << "<Press Enter to continue>";
		cin.ignore();
		cin.ignore();
		system("clear");
		return 0;
	}
}

//Function use to display and calculate damage to enemy. Input by refrence of integers, no output.
void attackui(int atk, int &enemyhp) {
	int printx;
	printx = 4;
	print(printx);
	cout << "You made " << atk << " damage to enemy!" << endl;
	sleep(1);
	if (enemyhp - atk > 0) {
		enemyhp -= atk;
	}
	else {
		enemyhp = 0;
	}
	cout << "Enemy current HP: " << enemyhp << endl;
	sleep(1);
	cout << "<Press Enter to continue>";
	cin.ignore();
	cin.ignore();
	system("clear");
}

//Function use to display and calculate damage to player. Input by refrence of integers, no output.
void attackbyenemyui(int &p_hp, int damage) {
	int printx;
	printx = 1;
	print(printx);
	cout << endl;
	cout << "Enemy made " << damage << " damages to you." << endl;
	sleep(1);
	if (p_hp - damage > 0) {
		p_hp -= damage;
	}
	else {
		p_hp = 0;
	}
	cout << endl;
	cout << "Your current HP: " << p_hp << "." << endl;
	cout << endl;
	cout << "<Press Enter to continue>";
	cin.ignore();
	system("clear");
	}

//Main function to run the game. No input. Return 0 to main.cpp if player won.
int battle() {
	srand(time(NULL));
	int gold = 0, atk = 10, hp = 100, passive_skill = 0, count_HP = 10, count_ATK = 10;
	int level = 1;
	int wordle_round = 0;
	map<int, int> enemyhp;
	enemyhp[1] = 30; enemyhp[2] = 40; enemyhp[3] = 50; enemyhp[4] = 70; enemyhp[5] = 100; enemyhp[6] = 120; enemyhp[7] = 150; enemyhp[8] = 160; enemyhp[9] = 160; enemyhp[10] = 200;
	map<int, int> enemyatk;
	enemyatk[1] = 10; enemyatk[2] = 15; enemyatk[3] = 20; enemyatk[4] = 20; enemyatk[5] = 30; enemyatk[6] = 30; enemyatk[7] = 40; enemyatk[8] = 40; enemyatk[9] = 45; enemyatk[10] = 50;
	map<int, int> money;
	money[1] = 50; money[2] = 244; money[3] = 486; money[4] = 737; money[5] = 951; money[6] = 1043; money[7] = 1224; money[8] = 1421; money[9] = 2000;
	init_intro();
	system("clear");
	while (level < 10) {
		int round_enemy_hp = enemyhp[level];
		int round_player_hp = hp;
		int shop_or_atk = mainui(level);
		int turn = 0;
		int def_or_atk = 0;
		if (shop_or_atk == 1) {
			shop(gold, atk, hp, passive_skill, count_ATK, count_HP);
		}
		if (shop_or_atk == 2) {
			system("clear");
			while (true) {
				int round_atk = atk;
				// check is player won
				if (round_enemy_hp <= 0) {
					int printx;
					printx = 6;
					print(printx);
					cout << "You Beat Level " << level << " !" << endl;
					gold += money[level];
					cout << endl;
					cout << "You earned " << money[level] << " !" << endl;
					cout << endl;
					cout << "You current have: " << gold << " gold(s)." << endl;
					cout << endl;
					cout << "Don't forget to spend them all in shop!" << endl;
					cout << endl;
					level++;
					sleep(1);
					cout << "<Press Enter to continue>";
					cin.ignore();
					system("clear");
					break;
				} //check is player lose
				else if (round_player_hp <= 0) {
					int printx;
					printx = 2;
					print(printx);
					cout << "You Lose..." << endl;
					sleep(1);
					cout << "<Press Enter to continue>";
					cin.ignore();
					system("clear");
					break;
				}
				if (turn == 0) {
					//check is play bought recover skill
					if (passive_skill) {
						int recover_hp = 0;
						if (round_player_hp == hp) {
							system("clear");
						}else if (hp * 0.2 + round_player_hp < hp) {
							recover_hp = hp * 0.2;
						}else {
							recover_hp = hp - round_player_hp;
						}
						cout << "Passive Skill!" << endl;
						sleep(1);
						cout << "HP is recovered by " << recover_hp << " !" << endl;
						round_player_hp += recover_hp;
						sleep(1);
						cout << "<Press Enter to continue>";
						cin.ignore();
						system("clear");
					}
					if (round_player_hp == hp) {
						system("clear");
					}else if (round_player_hp + 10 < hp) {
						cout << "You feel refreshing!" << endl;
						sleep(1);
						cout << "Your HP is increased by 10!" << endl;
						round_player_hp += 10;
					}else {
						round_player_hp += hp - round_player_hp;
						cout << "You feel refreshing!" << endl;
						sleep(1);
						cout << "Your HP is increased by " << hp - round_player_hp << " !" << endl;
					}
					def_or_atk = battleui(round_player_hp,round_enemy_hp,enemyatk[level],hp,level);
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
							sleep(1);
							cin.ignore();
							cout << "<Press Enter to continue>";
							cin.ignore();
							system("clear");
						}
					}
					turn = 1;
				}
				if ((turn == 1) && (round_enemy_hp>0)) {
					int temp = 0;
					turn = 0;
					cout << "Enemy's Turn!";
					cout << endl;
					if (def_or_atk == 1) {
						temp = defenceui();
					}
					if (temp) {
						int atk = enemyatk[level] / 2;
						attackbyenemyui(round_player_hp, atk);
					}
					else {
						attackbyenemyui(round_player_hp, enemyatk[level]);
					}
				}
			}
		}
	}
	return 0;
}
