//Circle 복사 생성자와 객체 복사
#include <iostream>
#include <string>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle(int radius);
	int setRadius(int radius);
	double getArea() {
		return 3.14 * radius * radius;
	}
	Circle(Circle &c);
};
Circle::Circle(int radius) {
	this->radius = radius;
}
Circle::Circle(Circle &c) {
	this->radius = c.radius;
	cout << " 복사생성자 실행 " << radius << endl;
}

int main() {
	Circle src(30);
	Circle tmp(src);
	cout << " 원본의 면적 = " << src.getArea() << endl;
	cout << " 사본의 면적 = " << tmp.getArea() << endl;
	return 0;
}