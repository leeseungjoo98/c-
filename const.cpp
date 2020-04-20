#include <iostream>
using namespace std;
int main() {
	const int value = 5;
	const int * ptr = &value;
	int * const ptr = &value;
	const int * const ptr = &value;


	return 0;
}