//다른 클래스 전체를 프렌드로 선언
#include <iostream>
using namespace std;
class Rect;


class RectManager {
	public :
	bool equal(Rect a, Rect b);
	void copy(Rect &dest, Rect &src);
};
class Rect {

private:
	int width;
	int height;
public :
	Rect(int width, int height);
	friend RectManager;
};
Rect::Rect(int width, int height) {
	this->width = width;
	this->height = height;
}
bool RectManager::equal(Rect a, Rect b) {
	if (a.width == b.width && a.height == b.height) return true;
	else return false;
}
void RectManager::copy(Rect &dest, Rect &src) {
	dest.width = src.width;
	dest.height = src.height;
}
int main() {
	Rect a(3, 4), b(5,6);
	RectManager p1;
	p1.copy(b, a);
	if (p1.equal(a, b)) cout << "equal" << endl;
	else cout << " not equal " << endl;
}