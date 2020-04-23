///10진수를 2진수로 변환하는 program
#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int number;
	cin >> number;
	
	int decim[20] = { 0 };
	
	int position = 0;
	while (1) {
		decim[position] = number % 2;
	number= number / 2;
		position++;

		if (number== 0) {
			break;
		}
	}
	for (int i = position; i >=0; i--) {
		cout << decim[i];
	}

	return 0;
}
