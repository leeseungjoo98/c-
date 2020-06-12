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
	bool operator == (Power cp1);
};
void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}
bool Power::operator == (Power cp1) {
	Power tmp;
	if (this->kick == cp1.kick && this->punch == cp1.punch) return true;
	else return false;
}
int main() {
	Power a(3, 5), b(3, 5);
	a.show();
	b.show();
	if (a == b) cout << "두 파워가 같다" << endl;
	else cout << " 두 파워가 같지 않다 " << endl;
	

}