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
	Power operator += (Power cp1);
};
void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}
Power Power::operator += (Power cp1) {
	this->kick = this->kick + cp1.kick;
	this->punch = this->punch + cp1.punch;
	return *this;
	
}
int main() {
	Power a(3, 5), b(4, 6), c;
	c = a += b;
	c.show();
	a.show();

}