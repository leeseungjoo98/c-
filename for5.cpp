//////////////////////////////*로 직각삼각형 **씩 늘어난다.
#include <iostream>
using namespace std;


int main() {

	for (int i = 0; i < 10; i++) {
		for (int g = 0; g < i * 2; g++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}