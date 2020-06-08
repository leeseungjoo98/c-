//Circle객체의 동적 생성 및 반환 #3
#include <iostream>
using namespace std;
class Circle {
	int radius;
public : 
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	
};
Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius =" << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius =" << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;

}
int main() {

	Circle *p1 = new Circle[3];
	p1[0].setRadius(10);
	p1[1].setRadius(20);
	p1[2].setRadius(30);
	for (int i = 0; i < 3; i++)
		cout << p1[i].getArea() << endl;
	Circle *p2 = p1;
	for (int i = 0; i < 3; i++)
	{
		cout << p2->getArea() << endl;
		p2++;
	}
	delete[] p1;
}