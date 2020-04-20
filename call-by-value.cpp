#include <iostream>
using namespace std;
void SwapByValue(int num1, int num2);

int main() {
	int num1 = 1;
	int num2 = 3;
	SwapByValue(1, 3);
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	return 0;
}
void SwapByValue(int num1, int num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "num1====" << num1 << endl;
	cout << "num2====" << num2 << endl;
}
