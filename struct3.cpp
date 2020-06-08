//C++구조체를 이용하기
#include <iostream>
using namespace std;
struct StructCircle {
private :
	int  a1;
public :
	StructCircle(int a);
	double getArea();
};
StructCircle::StructCircle(int a) {
	a1 = a;
}
double StructCircle::getArea() {
	return a1 * a1*3.14;
}
int main() {
	StructCircle waffle(3);
	cout << "면적은 " << waffle.getArea() << endl;
}