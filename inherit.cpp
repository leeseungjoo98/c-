//Point 클래스를 상속받는 ColorPoint 클래스 만들기
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
	Point p;
	ColorPoint p1;
	p1.setColor("red");
	p1.setPoint(3, 4);
	p1.showColorPoint();
	return 0;
}