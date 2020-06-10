//static 멤버를 가진 math 클래스
#include <iostream>
using namespace std;
class Person {

public:
	static int abs(int a) {
		return (a > 0) ? a : -a;
	}
	static int max(int a, int b) {
		return (a > b) ? a : b;

	}
	static int min(int a, int b) {
		return (a > b) ? b : a;
	}
};
int main() {

	cout << Person::abs(-5) << endl;
	cout << Person::max(10, 8) << endl;
	cout << Person::min(-3, -8) << endl;
	
	Person a1;
	cout << a1.abs(-5) << endl;
	cout << a1.max(10, 8) << endl;
	cout << a1.min(-3, -8) << endl;
	return 0;
}