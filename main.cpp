#include <iostream>
#include "menu.h"
#include "battle.h"
#include "print-drawing.h"

using namespace std;

int main() {
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
