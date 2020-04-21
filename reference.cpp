#include <iostream>
using namespace std;
int main() {
	int val1 = 30;
	int &val2 = val1;
	val2 = 3047;
	cout << "val1=" << val1 << endl;
	cout << "val2=" << val2 << endl;
	cout << "&val1=" << &val1 << endl;
	cout << "&val2=" << &val2 << endl;
	return 0;

}