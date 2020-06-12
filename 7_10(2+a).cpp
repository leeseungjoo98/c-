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
	friend Power operator+(int a, Power p2);
	
};
Power operator + (int a, Power p2) {
	Power tmp;
	tmp.kick= a +p2.kick;
	tmp.punch = a + p2.punch;
	return tmp;
}
void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}


int main() {
	
	Power a(3, 5), c;
	c = 2 + a;
	a.show();

	c.show();
	return 0;
}