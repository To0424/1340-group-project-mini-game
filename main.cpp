#include <iostream>
#include "menu.h"
#include "battle.h"
#include "print-drawing.h"

using namespace std;

//Function for running the game. No input. No output.
int main() {
	cout << "Please Use Full Screen mode!" << endl;
	cout << "<Press Enter once completed>";
	cin.ignore();
	system("clear");
	int temp = menu();
	if (temp) {
		system("clear");
		battle();
		int printx;
		printx = 7;
		print(printx);
		cout << "<Press Enter to Exit the Game>";
		cin.ignore();
		system("clear");
	}
return 0;
}
