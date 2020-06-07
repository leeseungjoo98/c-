//c1 클래스의 객체 생성 및 활용
#include <iostream>
using namespace std;
class c1 {
public :
	int radius;
	double getarea();
};
double c1::getarea() {
	return 3.14 * radius * radius;
}
int main() {
	c1 first;
	first.radius = 1;
	double area = first.getarea();
	cout << area << endl;
	c1 second;
	second.radius = 30;
	area = second.getarea();
	cout << area << endl;

}
