#include <iostream>
using namespace std;
class Rect;
bool equal(Rect a, Rect b);
class Rect {

private:
	int width;
	int height;
public :
	Rect(int width, int height);
	friend bool equal(Rect a, Rect b);
};
Rect::Rect(int width, int height) {
	this->width = width;
	this->height = height;
}
bool equal(Rect a, Rect b) {
	if (a.width == b.width && a.height == b.height) return true;
	else return false;
}
int main() {
	Rect a(3, 4), b(4, 5);
	if (equal(a, b)) cout << "equal" << endl;
	else cout << " not equal " << endl;
}