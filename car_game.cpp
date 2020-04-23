#include <iostream>
using namespace std;
#define accel 20
#define break 10
#define max_speed 200
#define ID_leng 30
#define FUELCONSUME 2

typedef struct Car {
	char ID[ID_leng];
	int amount;
	int speed;
}Car;
void Accel(Car &name);
void Break(Car &name);
void outputname(Car const &name);
int main() {
	Car pool9789 = { "pool9789",100,0 };
	Accel(pool9789);
	Accel(pool9789);
	Break(pool9789);
	Break(pool9789);
	outputname(pool9789);
	Break(pool9789);
	outputname(pool9789);

	Car happy = { "642happy",100,0 };
	Accel(happy);
	Break(happy);
	Break(happy);
	outputname(happy);

}
void Accel(Car &name) {
	if (name.amount <= 0) {
		return;

	}
	else
		name.amount -= FUELCONSUME;

	if (name.speed >= max_speed) {
		name.speed = max_speed;
		return;
	}
	name.speed += accel;
}
void Break(Car &name) {
	if (name.speed <break) {
		name.speed = 0;
		return;
	}
	name.speed -= break;
	
}
void outputname(Car const &name) {
	cout << "소유자ID:" << name.ID << endl;
	cout << "연료량 :" << name.amount << endl;
	cout << "현재 속도:" << name.speed << endl;
}