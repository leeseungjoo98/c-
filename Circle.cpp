#include <iostream>
#include "Circle.h"
using namespace std;

double Circle::getArea() {
	return 3.14 * a * a;

}
Circle::Circle(int a1) {
	a = a1;
}
Circle::Circle() {
	a = 1;
}