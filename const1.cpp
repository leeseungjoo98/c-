#include <iostream>
using namespace std;

int main() {
	const int num = 12;
	const int *pointer = &num;
	const int *(&Ref) = pointer;
	cout << "*Ref=" << *Ref << endl;
    return 0;
	
}
