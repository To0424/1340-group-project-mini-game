#include <iostream>
#include <windows.h>

using namespace std;

//Are Sleep changed?

int battle() {
	cout << "Welcome! Our Saviour!" <<endl;
	Sleep(3000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
	cout << "This country is now under invasion from Monsters!!!" << endl;
	Sleep(3000); // windows is in ms, Unix(Mac/linus) is in Second. Remember to modify this!!!!!
	cout << "Please Help us with your super power!" << endl;
	Sleep(3000);

	wordle();

	return 0;
}