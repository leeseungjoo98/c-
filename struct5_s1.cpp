#ifndef S1_H
#define S1_H
#include <iostream>
using namespace std;
class Calculator {
private :

	int number;
public :
	void run();
};

void  Calculator::run() {
	int a, b;
	cin >> a;
	cin >> b;
	number = a + b;
	cout << number << endl;

}


#endif // !S1_H
