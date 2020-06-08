//객체 배열 초기화 (with 생성자)
#include <iostream>
using namespace std;
class Circle {
private : 
	int a;
public :
	
	double getArea();
	
	Circle();
	Circle(int number);
};
Circle::Circle() {
	a = 1;
}
Circle::Circle(int number) {
	a = number;
}
double Circle::getArea() {
	return 3.14 * a *a; 
}

int main() {
	Circle circleArray[3] = { Circle(10),Circle(20),Circle()};
	
	for (int i = 0; i < 3; i++)
		cout << "circle:" << i << "의 면적은 " << circleArray[i].getArea() << endl;
	Circle *p;
	p = circleArray;
	for ( int i = 0; i < 3; i++) {
	cout << "circle:" << i << "의 면적은 " << p->getArea() << endl;
	p++;

     }

}