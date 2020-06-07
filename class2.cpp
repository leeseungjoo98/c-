//직사각형 면적 구하기 
#include <iostream>
using namespace std;
class c1 {
public :
	int width, height;
	int get();

};
int c1::get() {
	return width * height;
}
int main() {
	c1 rectangle;
	rectangle.width = 3;
	rectangle.height = 5;
	int area = rectangle.get();
	cout << area << endl;

	return 0;
}