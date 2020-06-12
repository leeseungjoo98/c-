#include <iostream>
#include <string>
using namespace std;
class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick, this->punch = punch;
	}
	void show();
	Power operator + (Power cp1);
};
void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}
Power Power::operator+(Power cp1) {
	Power tmp;
	tmp.kick = this->kick + cp1.kick;
	tmp.punch = this->punch + cp1.punch;
	return tmp;
}
int main() {
	Power a(3, 5), b(4, 6), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
}