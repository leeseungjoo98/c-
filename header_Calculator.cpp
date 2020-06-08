#include <iostream>
using namespace std;
#include "Calculator.h"
#include "Adder.h"
void  Calculator::run() {
	int a, b;
	cin >> a >> b;
	Adder apple(a, b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "결과:" << apple.process() << endl;

}

