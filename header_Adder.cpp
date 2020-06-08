#include <iostream>
#include "Adder.h"
using namespace std;


Adder::Adder(int a, int b) {
	a1 = a;
	b1 = b;

}
int Adder::process() {
	return a1 + b1;
}

