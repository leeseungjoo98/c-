//참조변수
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
	Circle(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14*radius*radius;
	}
	
};
Circle getCircle() {
	Circle tmp(30);
	return tmp;
}
int main() {
	
	Circle c;
	Circle &tmp = c;
}