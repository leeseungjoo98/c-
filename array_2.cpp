//Circle 클래스의 2차원 배열 선언
#include <iostream>
using namespace std;
class Circle {
private: 
	int radius;
public :
	void setRadius(int a);
	double getArea();
};
void Circle::setRadius(int a) {
	radius = a;
}
double Circle::getArea() {
	return 3.14 * radius *radius;
}
int main() {
	Circle circles[2][3];
	circles[0][0].setRadius(1);
	circles[0][1].setRadius(2);
	circles[0][2].setRadius(3);
	circles[1][0].setRadius(4);
	circles[1][1].setRadius(5);
	circles[1][2].setRadius(6);
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++) {
			cout << "Circle[" << i << "][" << j << "]은 ";
			cout << circles[i][j].getArea() << endl;
		}


	return 0;
}