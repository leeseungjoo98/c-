//생성자로 private 멤버변수 접근
#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	int state();
	Circle();
	Circle(int a);
};
int Circle::state() {
	return radius;
}
Circle::Circle() {
	radius = 1;
	cout << "radius는 " << radius << endl;
}
Circle::Circle(int a) {
	radius = a;
	cout << "radius는 " << radius << endl;
}
int main() {
	Circle c1(5);

	return 0;
}