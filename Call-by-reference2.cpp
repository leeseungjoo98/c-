#include <iostream>
using namespace std;
void SwapPointer(int *(&sp), int *(& sp1));
int main() {
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;
	SwapPointer(ptr1, ptr2);
	cout << "*ptr1= num2=" << *ptr1 << endl;
	cout << "*ptr2= num1=" << *ptr2 << endl;
}
void SwapPointer(int *(&sp), int *(&sp1)) {
	int  * temp;
	temp = sp;
	sp = sp1;
	sp1 = temp;
}
