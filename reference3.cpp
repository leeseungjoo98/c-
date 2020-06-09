//객체에 대한 참조
#include <iostream>
#include <string>
using namespace std;
class Circle {
private :
	int radius;
public :
	Circle() {
		this->radius = 1;

	}
	int setRadius(int radius) {
		return this->radius = radius;
	}
	double getArea() {
		return 3.14*radius*radius;
	}
};
int main() {

	Circle circle;
	Circle &refn = circle;
	refn.setRadius(10);
	cout << "refn.getArea()" << refn.getArea() << endl <<" circle.getArea()" << circle.getArea() << endl;
}