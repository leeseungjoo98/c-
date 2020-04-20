#include <iostream>
using std::cout;
using std::endl;

int val1 = 10;
int main() {
	int val1 = 20;
	val1 += 1;
	cout << "val1 += 1: " << val1  << endl;

	::val1 += 1;
	cout << "::val1 += 1: " << ::val1 << endl;

}