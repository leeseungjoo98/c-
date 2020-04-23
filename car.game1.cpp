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
	void outputname() {
		cout << "소유자ID:" << ID << endl;
		cout << "연료량 :" << amount << endl;
		cout << "현재 속도:" << speed << endl;
	}
	void Accel() {
		if (amount <= 0) {
			return;

		}
		else
			amount -= FUELCONSUME;

		if (speed >= max_speed) {
			speed = max_speed;
			return;
		}
		speed += accel;
	}
	void Break() {
		if (speed < break) {
		speed = 0;
			return;
		}
		speed -= break;

	}
}Car;


int main() {
	Car pool9789 = { "pool9789",100,0 };
	pool9789.Accel();
	pool9789.Accel();
	pool9789.Break();
	pool9789.Break();
	pool9789.outputname();
	pool9789.Break();
	pool9789.outputname();

	Car happy = { "642happy",100,0 };
	happy.Accel();
	happy.Break();
	happy.Break();
	happy.outputname();

}

void outputname(Car const &name) {
	cout << "소유자ID:" << name.ID << endl;
	cout << "연료량 :" << name.amount << endl;
	cout << "현재 속도:" << name.speed << endl;
}