#include <iostream>
using namespace std;
#ifndef __HEAD_H__
#define __HEAD_H__
namespace CAR_CONST {
	enum {
		ID_LENG=200,
		MAX_SPEED=200,
		ACCEL_SPEED=10,
		BREAK_DELAY=10,
		FUEL_CONSUME=2
	};

}


class Car {
private :
	char ID[CAR_CONST::ID_LENG];//id
	int Speed;//속도
	int fuel;//연료량
public :
	void printout();
	void Accel();
	void Break();
	void Add_ID(const char *ID1, int fuel1);
	
};
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
		Speed += CAR_CONST::ACCEL_SPEED;
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
void inline Car::Add_ID(const char *ID1, int fuel1) {
	strcpy(ID, ID1);
	fuel = fuel1;
	Speed = 0;
}
#endif