#include <iostream>
#include "menu.h"
#include "battle.h"
#include "print-drawing.h"

using namespace std;

int main() {
	cout << "Please Use Full Screen mode!" << endl;
	cout << "<Press Enter once completed>";
	cin.ignore();
	system("cls");
	system("clear");
	int temp = menu();
	if (temp) {
		system("cls");
		system("clear");
		battle();
		int printx;
		printx = 7;
		print(printx);
	}
return 0;
}
