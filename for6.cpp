/*원하는 출력
  *
 **
***
*/
#include <iostream>
using namespace std;


int main() {

	for (int i = 0; i < 3; i++) {
		for (int g = 2; g > i;g--) {
			cout << " ";
			
		}
		for (int h = 0; h < i + 1;h++) {
			cout << "*";

		}
		cout << endl;
		
	}

	return 0;
}