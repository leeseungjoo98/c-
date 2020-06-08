//Circle 클래스의 2차원 배열 선언 #2
#include <iostream>
using namespace std;
class Circle {
private: 
	int radius;
public :
	void setRadius(int a);
	double getArea();
	Circle(int a) {
		radius = a;
	}
};
void Circle::setRadius(int a) {
	radius = a;
}
double Circle::getArea() {
	return 3.14 * radius *radius;
}
int main() {
	
	Circle circles[2][3] = { {Circle(1),Circle(2),Circle(3)},{Circle(4),Circle(5),Circle(6)} };
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++) {
			cout << "Circle[" << i << "][" << j << "]은 ";
			cout << circles[i][j].getArea() << endl;
		}


	return 0;
}