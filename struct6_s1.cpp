#ifndef S1_H
#define S1_H
#include <iostream>
using namespace std;
class Adder {
private:
	int a1, b1;
public :
	Adder(int a, int b);
	int process();
};
Adder::Adder(int a,int b){
	a1 = a;
	b1 = b;

}
int Adder::process() {
	return a1 + b1;
}

class Calculator {

public :
	void run();
};

void  Calculator::run() {
	int a, b;
	cin >> a >> b;
	Adder apple(a, b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "결과:"<< apple.process() << endl;

}


#endif // !S1_H
