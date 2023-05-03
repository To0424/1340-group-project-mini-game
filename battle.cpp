#include <iostream>
#include <windows.h>
#include "wordle.h"

using namespace std;

//Are Sleep changed?

void init_intro() {
	cout << "Welcome! Our Saviour!" << endl;
	Sleep(3000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
	cout << "This country is now under invasion from Monsters!!!" << endl;
	Sleep(3000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
	cout << "Please Help us with your super power!" << endl;
	Sleep(3000);

}

int battle() {
	init_intro();
	wordle();

	return 0;
}