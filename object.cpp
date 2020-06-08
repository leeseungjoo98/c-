//Circle객체의 동적 생성 및 반환
#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public :
	double getArea() {
		return 3.14 * radius * radius;

	}
	Circle() {
		
		radius = 1;
		cout << "생성자 실행 " << "radius = " << radius << endl;
	}
	Circle(int a) {
		
		radius = a;
		cout << "생성자 실행 " << "radius = " << radius << endl;
	}
	~Circle();
};
    Circle::~Circle() {
		cout <<"소멸자 실행 "<< "radius = " << radius << endl;
	}

int main() {
	Circle *p, *q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;
	return 0;
}