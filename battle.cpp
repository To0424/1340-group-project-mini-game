#include <iostream>
#include <windows.h>
#include "wordle.h"
#include <string>
#include "shop.h"

using namespace std;

//Are Sleep changed?

// Function ui is to display the ui to player. Input will be an int, output will be an int
int ui() {
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



int battle() {
	int action = 0;
	init_intro();
	if (ui()) {
		wordle();
	}
	else {
		shop();
	}
	

	return 0;
}