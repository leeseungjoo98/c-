#include <iostream>
using namespace std;
void Sway(int *p, int *q);
int main() {
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;
	Sway(&num1, &num2);
	cout << "*ptr2=num2=" << *ptr2 << endl;
	cout << "ptr1=num1=" << *ptr1 << endl;
	return 0;
	
}
void Sway(int *p,int *q) {
	int * temp;
	temp = p;
	p = q;
	q = temp;


}
