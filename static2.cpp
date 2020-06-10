//static멤버를 공유의 목적으로 사용하는 예
#include <iostream>
using namespace std;
class Circle {

private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1);
	~Circle() {
		numOfCircles--;
	}
	static int getNumOfCircle();

};
Circle::Circle(int r) {
	radius = r;
	numOfCircles++;
}
int Circle::numOfCircles = 0;

int Circle::getNumOfCircle() {
	return numOfCircles;
}


int main() {
	Circle *p = new Circle[10];
	cout << Circle::getNumOfCircle() << endl;
	delete[] p;
	Circle a;
	cout << Circle::getNumOfCircle() << endl;
	Circle b;
	cout << Circle::getNumOfCircle() << endl;

}