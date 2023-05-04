#include <iostream>
#include "menu.h"
#include "battle.h"

using namespace std;

int main() {
	int temp = menu();
	if (temp) {
		system("cls");
		system("clear");
		battle();
		//winning outro by jane -> beat the game
	}
return 0;
}
