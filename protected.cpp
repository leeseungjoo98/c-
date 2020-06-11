#include <iostream>
#include <string>
using namespace std;
class Point {
protected :
	int x, y;
public :
	void set(int x, int y);
	void showPoint();
	
};

class ColorPoint : public Point {
private :
	string s;
public :
	void setColor(string s);
	void showColorPoint();
	bool equals(ColorPoint cp);
};
bool ColorPoint::equals(ColorPoint cp) {
	if (this->x == cp.x && this->y == cp.y) return true;
	else return false;
}
void ColorPoint::setColor(string s) {
	this->s = s;
}
void ColorPoint::showColorPoint() {
	showPoint();
	cout << s << endl;
}
void Point::set(int x, int y) {
	this->x = x;
	this->y = y;
}
void Point::showPoint() {
	cout << "x= " << x << "y= " << y << endl;
}


int main() {

	Point p;
	p.set(2, 3);
	//p.x = 5;
	//p.y = 6;
	p.showPoint();
	ColorPoint cp;
	//cp.x = 10;
	//cp.y = 10;
	cp.set(3,4);
	cp.setColor("RED");
	cp.showColorPoint();
	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("RED");
	cout << ((cp.equals(cp2)) ? "true" : "false");



	return 0;
}