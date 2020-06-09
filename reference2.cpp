//기본 타입 변수에 대한 참조자
#include <iostream>
#include <string>
using namespace std;
int main() {

	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int &refn = n;
	n = 5;  //n=5; refn =5
	cout << i << '\t' << n << '\t' << refn << endl;
	n = 1;
	refn = 5;
	cout << i << '\t' << n << '\t' << refn << endl;
	n = 1;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;
	int *p = &refn;
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << endl;
	return 0;

}