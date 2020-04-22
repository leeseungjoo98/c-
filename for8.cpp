/*원하는 출력
  *
 ***
*****
*/
#include <iostream>
using namespace std;


int main() {
	int number;
	cout << "원하는 숫자:";
	cin >> number;
	for (int i = 0; i < number; i++) {
		for (int g = 2+number; g > i;g--) {
			cout << " ";
			
		}
	    for (int h = 0; h < i + 1;h++) {
		 cout << "*";

		 }
		for (int k = 0; k < i; k++) {
			cout << "*";
		}
		cout << endl;
		
	}

	return 0;
}