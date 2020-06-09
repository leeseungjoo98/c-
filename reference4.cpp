//참조 매개변수 만들기 
#include <iostream>
#include <string>
using namespace std;
class Circle {
private :
	int radius;
public :
	int setRadius(int radius) {
		return this->radius = radius;

	}
	double getArea() {
		return 3.14 *radius * radius;
	}
};
void readRadius(Circle &c) {
	int number;
	cout << " 정수 값으로 반지름을 입력하세요>>";
	cin >> number;
	c.setRadius(number);
	

}
int main() {
	Circle donut;
	
	readRadius(donut);
	cout << " donut의 면적 =" << donut.getArea() << endl;
}