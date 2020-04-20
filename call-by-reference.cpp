#include <iostream>
using namespace std;
void change(int *a, int *b);
int main() {
	int a, b;
	a = 10;
	b = 3;
	change(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b<< endl;
	return 0;
}
void change(int *a,int  *b) {
	int Temp;
	Temp = *a;
	*a = *b;
	*b = Temp;
	

}