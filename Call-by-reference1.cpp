#include <iostream>
using namespace std;
void Reference(int &ref);
void Change(int &st);
int main() {
	int a;
	cout << "a:";
	cin >> a;
	
	int b;
	cout << "b:";
	cin >> b;
	Reference(a);
	Change(b);
	cout << "a="<<a << endl;
	cout << "b=" << b << endl;
	return 0;

}
void Reference(int &ref) {
	ref++;
	cout << "ref=" << ref << endl;
}
void Change(int &st) {
	st *= (-1);
	cout << "st=" <<st <<endl;
}