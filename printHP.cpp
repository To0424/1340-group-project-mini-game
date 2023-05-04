#include<iostream>
#include"printHP.h"
#include<cmath>
using namespace std;

void print_hp(int &now, int &full){
    double percent=(100*now/full);
	if (percent==0){cout << "|GAME--OVER|" };
	elif (0<percent<10){cout << "|=         |" };
	elif (10<=percent<20){cout << "|==        |" };
	elif (20<=percent<30){cout << "|===       |" };
	elif (30<=percent<40){cout << "|====      |" };
	elif (40<=percent<50){cout << "|=====     |" };
	elif (50<=percent<60){cout << "|======    |" };
	elif (60<=percent<70){cout << "|=======   |" };
	elif (70<=percent<80){cout << "|========  |" };
	elif (80<=percent<90){cout << "|========= |" };
	elif (90<=percent<=100){cout << "|==========|" };
}
