#include <iostream>
using namespace std;
class Rect;


class RectManager {
	public :
	bool equal(Rect a, Rect b);
};
class Rect {

private:
	int width;
	int height;
public :
	Rect(int width, int height);
	friend bool RectManager::equal(Rect a, Rect b);
};
Rect::Rect(int width, int height) {
	this->width = width;
	this->height = height;
}
bool RectManager::equal(Rect a, Rect b) {
	if (a.width == b.width && a.height == b.height) return true;
	else return false;
}
int main() {
	Rect a(3, 4), b(3, 4);
	RectManager p1;
	if (p1.equal(a, b)) cout << "equal" << endl;
	else cout << " not equal " << endl;
}