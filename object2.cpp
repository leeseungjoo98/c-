//Circle객체의 동적 생성 및 반환 #2
#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	double getArea() {
		return 3.14 * radius * radius;

	}
	
	Circle(int a) {

		radius = a;
		cout << "생성자 실행 " << "radius = " << radius << endl;
	}
	~Circle();
};
Circle::~Circle() {
	cout << "소멸자 실행 " << "radius = " << radius << endl;
}

int main() {	
	int number;
	while (true) {
		cout << " 숫자 입력 ";
		cin >> number;
		if (number < 0) break;
		Circle *q;
		q = new Circle(number);
		cout << q->getArea() << endl;

		delete q;
		
	}
}