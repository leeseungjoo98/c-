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
	Power operator + (int a);
};
void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}
Power Power::operator+(int a) {
	Power tmp;
	tmp.kick= this->kick + a;
	tmp.punch= this->punch + a;
	return tmp;
}
int main() {
	Power a(3, 5), b;
	b = a + 2;
	a.show();
	b.show();
	return 0;
}