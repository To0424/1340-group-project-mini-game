#include <iostream>
#include <windows.h>
#include "wordle.h"
#include <string>
#include "shop.h"
#include <map>
#include "print.h"
#include <string>

using namespace std;


//Are Sleep changed?

// Function mainui is to display the mainui to player. Input will be an int, output will be an int
int mainui() {
	int choice = 0;
	string input;
	cout << "=====================================================" << endl; // length = 53
	cout << "                   _           __                    " << endl;
	cout << "    /\            | |         / _|                   " << endl;
	cout << "   /  \   _ __ ___| |__   ___| |_ ___  _ __ ___ ___  " << endl;
	cout << "  / /\ \ | '__/ __| '_ \ / _ \  _/ _ \| '__/ __/ _ \ " << endl;
	cout << " / ____ \| | | (__| | | |  __/ || (_) | | | (_|  __/ " << endl;
	cout << "/_/    \_\_|  \___|_| |_|\___|_| \___/|_|  \___\___| " << endl;
	cout << "                                                     " << endl;
	cout << "=====================================================" << endl;
	cout << "              What are you going to do?" << endl;
	cout << "=====================================================" << endl;
	cout << "|          1.Shop         |          2.Battle       |" << endl;
	cout << "=====================================================" << endl;
	while (true) {
		cout << "Enter your choice (1 or 2): " << endl;
		getline(cin, input);
		try {
			choice = stoi(input);
			if ((choice == 1) || (choice == 2)) {
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
	cout << "=====================================================" << endl; // length = 53
	cout << "                   _           __                    " << endl;
	cout << "    /\            | |         / _|                   " << endl;
	cout << "   /  \   _ __ ___| |__   ___| |_ ___  _ __ ___ ___  " << endl;
	cout << "  / /\ \ | '__/ __| '_ \ / _ \  _/ _ \| '__/ __/ _ \ " << endl;
	cout << " / ____ \| | | (__| | | |  __/ || (_) | | | (_|  __/ " << endl;
	cout << "/_/    \_\_|  \___|_| |_|\___|_| \___/|_|  \___\___| " << endl;
	cout << "                                                     " << endl;
	cout << "=====================================================" << endl;
	Sleep(5000);
	cout << "Welcome! Our Saviour!" << endl;
	Sleep(2000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
	cout << "This country is now under invasion from Monsters!!!" << endl;
	Sleep(2000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
	cout << "Please Help us with your super power!" << endl;
	Sleep(2000);
}  

// Function battleui is to display the battleui to player. Input will be an int, output will be an int
int battleui() {
	string input;
	int choice;
	// drawing by Jan at inital state
	cout << "=====================================================" << endl;
	cout << "              What are you going to do?" << endl;
	cout << "=====================================================" << endl;
	cout << "|        1.Defence        |          2.Battle       |" << endl;
	cout << "=====================================================" << endl;
	while (true) {
		cout << "Enter your choice (1 or 2): " << endl;
		getline(cin, input);
		try {
			choice = stoi(input);
			if ((choice == 1) || (choice == 2)) {
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

int battle() {
	map<int, int> enemyhp;
	enemyhp[1] = 30; enemyhp[2] = 40; enemyhp[3] = 50; enemyhp[4] = 70; enemyhp[5] = 100; enemyhp[6] = 120; enemyhp[7] = 150; enemyhp[8] = 160; enemyhp[9] = 160; enemyhp[10] = 200;
	map<int, int> enemyatk;
	enemyatk[1] = 10; enemyatk[2] = 15; enemyatk[3] = 20; enemyatk[4] = 20; enemyatk[5] = 30; enemyatk[6] = 30; enemyatk[7] = 40; enemyatk[8] = 40; enemyatk[9] = 45; enemyatk[10] = 50;
	init_intro();
	if (mainui()) {

		wordle();
	}
	else {
		shop();
	}
	

	return 0;
}