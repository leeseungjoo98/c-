//객체 배열
#include <iostream>
using namespace std;
class Circle {
private : 
	int a;
public :
	void  setRadius(int number) {
		a = number;
	}
	double getArea();
};
double Circle::getArea() {
	return 3.14 * a *a; 
}

int main() {
	Circle circleArray[3];
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);
	for (int i = 0; i < 3; i++)
		cout << "circle:" << i << "의 면적은 " << circleArray[i].getArea() << endl;
	Circle *p;
	p = circleArray;
	for ( int i = 0; i < 3; i++) {
	cout << "circle:" << i << "의 면적은 " << p->getArea() << endl;
	p++;

     }

}