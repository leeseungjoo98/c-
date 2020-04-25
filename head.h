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
#endif