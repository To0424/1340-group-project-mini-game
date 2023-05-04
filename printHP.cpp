#include<iostream>
#include"printHP.h"
#include<cmath>
using namespace std;

string print_hp(now, full){
    double percent=(100*now/full);
	if (percent==0){return "|GAME--OVER|" ;}
	else if (0<percent && percent<10){return "|=         |" ;}
	else if (10<=percent && percent<20){return "|==        |" ;}
	else if (20<=percent && percent<30){return "|===       |" ;}
	else if (30<=percent && percent<40){return "|====      |" ;}
	else if (40<=percent && percent<50){return "|=====     |" ;}
	else if (50<=percent && percent<60){return "|======    |" ;}
	else if (60<=percent && percent<70){return "|=======   |" ;}
	else if (70<=percent && percent<80){return "|========  |" ;}
	else if (80<=percent && percent<90){return "|========= |" ;}
	else if (90<=percent && percent<=100){return "|==========|";}
}
