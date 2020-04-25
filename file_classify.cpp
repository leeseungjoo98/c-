///C++에서 파일분할
#pragma warning(disable : 4996)
#include <iostream>
#include<cstring>
#include "head.h"
using namespace std;
void inline Car::Accel() {
	
	if (fuel <= 0) {
		return;
	}
	else
		fuel -= CAR_CONST::FUEL_CONSUME;
		
	if (Speed + CAR_CONST::ACCEL_SPEED >= CAR_CONST::MAX_SPEED)
	{
		Speed = CAR_CONST::MAX_SPEED;
	}
	else
		Speed +=CAR_CONST::ACCEL_SPEED;
}
void inline Car::Break() {
	if (Speed < 10) {
		Speed = 0;

	}
	else
		Speed -= CAR_CONST::BREAK_DELAY;
}

void inline Car::printout() {
	cout << "소유자 ID:" << ID << endl;
	cout << "연료량:" << fuel << endl;
	cout << "현재 속도:" << Speed << endl;
}
void inline Car::Add_ID(const char *ID1,int fuel1) {
	strcpy(ID,ID1);
	fuel = fuel1;
	Speed = 0;
}
int main() {
	Car p1;
	p1.Add_ID("pool9789", 100);
	p1.Accel();
	p1.Accel();
	p1.Accel();
	p1.printout();
	p1.Break();
	p1.printout();
	return 0;
	
}
