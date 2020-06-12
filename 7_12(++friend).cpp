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
	friend Power operator++(Power &cp1, int a);
	friend Power operator ++ (Power &cp1);
};
Power operator ++ (Power &cp1 ,int a) {
	Power tmp = cp1;
	cp1.kick++;
	cp1.punch++;
	return tmp;
}
Power operator ++ (Power &cp1) {
	cp1.kick++;
	cp1.punch++;
	return cp1;
}
void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}


int main() {
	Power a(3, 5), b;
	b = ++a; 
	a.show();
	b.show();
	b= a++;
	a.show();
	b.show();
	

	return 0;
}