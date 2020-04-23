//////////////자동차 운행 program
#include <iostream>
using namespace std;
typedef struct Car {
	typedef enum element {
		ID_LEN = 20,
		MAX_SPEED = 200,
		ACCEL_ADD = 20,
		BREAK_DECLINE = 10,
		AMOUNT_DECLINE = 2


	}element;
	char ID[ID_LEN];//소유주
	int amount;//연료량
	int speed;//속도
	void Accel(); 
	void Break();
	void Printout();
}Car;
int main() {
	Car pool9789 = { "pool9789",100,0 };
	pool9789.Accel();
	
	pool9789.Printout();
	pool9789.Break();

	pool9789.Printout();

	Car happy = { "happy",100,0 };
	happy.Accel();
	happy.Break();
	happy.Break();
	happy.Printout();

	return 0;

}
void inline Car::Accel() {
	if (amount <= 0)
		return;
	else
		amount -= AMOUNT_DECLINE;
	if (speed >= MAX_SPEED)
		speed = MAX_SPEED;
	else
		speed += ACCEL_ADD;

}
void inline Car::Break() {
	if (speed < 10)
		speed = 0;
	else
		speed -= BREAK_DECLINE;
}
void inline Car::Printout() {
	cout << "소유주 : " << ID << endl;
	cout << "연료량: " << amount << endl;
	cout << "속도: " << speed << endl;

}