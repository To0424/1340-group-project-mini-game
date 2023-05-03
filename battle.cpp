#include <iostream>
#include <windows.h>
#include "wordle.h"

using namespace std;

//Are Sleep changed?

void ui() {
	

}

void init_intro() {
	cout << "====================================================="; // length = 53
	cout << "                   _           __                    ";
	cout << "    /\            | |         / _|                   ";
	cout << "   /  \   _ __ ___| |__   ___| |_ ___  _ __ ___ ___  ";
	cout << "  / /\ \ | '__/ __| '_ \ / _ \  _/ _ \| '__/ __/ _ \ ";
	cout << " / ____ \| | | (__| | | |  __/ || (_) | | | (_|  __/ ";
	cout << "/_/    \_\_|  \___|_| |_|\___|_| \___/|_|  \___\___| ";
	cout << "                                                     ";
	cout << "=====================================================";
	Sleep(5000);
	cout << "Welcome! Our Saviour!" << endl;
	Sleep(2000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
	cout << "This country is now under invasion from Monsters!!!" << endl;
	Sleep(2000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
	cout << "Please Help us with your super power!" << endl;
	Sleep(2000);
} // this is use to print out title of the game. No input or output.



int battle() {
	init_intro();
	wordle();

	return 0;
}