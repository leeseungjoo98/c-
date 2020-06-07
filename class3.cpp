//생성자를 통해 정사각형인지 판단 
#include <iostream>
using namespace std;
class Rectangle {
public:
	int width, height;
	bool isSquare();
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int a);
};
bool Rectangle::isSquare() {
	if (width == height)
	return true;
	else
	return	false;
}
Rectangle::Rectangle() {
	width = 3;
	height = 3;
}
Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;

}
Rectangle::Rectangle(int a) {
	width = a;
	height = a;
}
int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);
	if (rect1.isSquare())cout << "rect1은 정사각형 입니다." << endl;
	if (rect2.isSquare())cout << "rect2은 정사각형 입니다." << endl;
	if (rect3.isSquare())cout << "rect3은 정사각형 입니다." << endl;
}