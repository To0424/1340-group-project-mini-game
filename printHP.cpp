#include<iostream>
#include"printHP.h"
#include<cmath>
using namespace std;

void print_hp(int now, int full){
    double percent=(100*now/full);
	if (percent==0){cout << "|GAME--OVER|" ;}
	else if (0<percent && percent<10){cout << "|=         |" ;}
	else if (10<=percent && percent<20){cout << "|==        |" ;}
	else if (20<=percent && percent<30){cout << "|===       |" ;}
	else if (30<=percent && percent<40){cout << "|====      |" ;}
	else if (40<=percent && percent<50){cout << "|=====     |" ;}
	else if (50<=percent && percent<60){cout << "|======    |" ;}
	else if (60<=percent && percent<70){cout << "|=======   |" ;}
	else if (70<=percent && percent<80){cout << "|========  |" ;}
	else if (80<=percent && percent<90){cout << "|========= |" ;}
	else if (90<=percent && percent<=100){cout << "|==========|";}
	return;
}
