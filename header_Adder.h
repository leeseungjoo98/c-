#ifndef ADDER_H
#define ADDER_H
#include <iostream>
using namespace std;
class Adder {
private:
	int a1, b1;
public:
	Adder(int a, int b);
	int process();
};
#endif