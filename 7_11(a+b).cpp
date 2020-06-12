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
	friend Power operator+(Power p1, Power p2);
	
};
Power operator + (Power p1, Power p2) {
	Power tmp;
	tmp.kick = p1.kick + p2.kick;
	tmp.punch = p1.punch + p2.punch;
	return tmp;
}
void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}


int main() {
	
	Power a(3, 5), b(4, 6), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
	return 0;
}