#include<iostream>
#include"printHP.h"
#include<cmath>
using namespace std;

void print_hp(int &now, int &full){
    double percent=(100*now/full);
	if (percent==0){cout << "|GAME--OVER|" ;}
	else if(0 < percent < 10) { cout << "|=         |"; }
	else if(10 <= percent < 20) { cout << "|==        |"; }
	else if(20 <= percent < 30) { cout << "|===       |"; }
	else if(30 <= percent < 40) { cout << "|====      |"; }
	else if(40 <= percent < 50) { cout << "|=====     |"; }
	else if(50 <= percent < 60) { cout << "|======    |"; }
	else if(60 <= percent < 70) { cout << "|=======   |"; }
	else if(70 <= percent < 80) { cout << "|========  |"; }
	else if(80 <= percent < 90) { cout << "|========= |"; }
	else if(90 <= percent <= 100) { cout << "|==========|"; }
}