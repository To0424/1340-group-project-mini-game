#include <iostream>
#include "menu.h"
#include "battle.h"

using namespace std;

int main() {
	if (menu()) {
		system("clear");
		system("cls");
		battle();
	}

return 0;
}
