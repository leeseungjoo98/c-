//상속과 다운 캐스팅
#include <iostream>
#include <string >
using namespace std;
class Point { //2차원 평면에서 한점을 표현하는 클래스 POINT 선언
private : 
	int x,y;
public :
	void setPoint(int x, int y);
	void show() {
		cout << ":(" << x << ","  << y  << ")"<< endl;
	}
	};

class ColorPoint : public Point {
private:
	string color;
public :
	void setColor(string color) {
		this->color = color;

	}
	void showColorPoint() {
		cout << color;
		show();
	}
};
void Point::setPoint(int x, int y) {
	this->x = x;
	this->y = y;

}
int main() {
	
	ColorPoint p1, *p2;
	Point *p = &p1;
	p->setPoint(3, 4);
	p->show();
	p2 = (ColorPoint*)p;

	p2->setColor("red");
	p2->setPoint(4, 5);
	p1.showColorPoint();
	return 0;
}