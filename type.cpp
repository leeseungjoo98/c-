#include <iostream>
using namespace std;

int main() {
	int count = 0;
	cout << "true : " <<true << endl;
	cout << "false : " << false << endl;
	while(true){
		
		cout << count++ << ' ';
		
		if (count > 10) 
			break;
	
		
		

	}
	cout << endl;
	cout << "sizeof 1: " << sizeof(1) << endl;
	cout << "sizeof 0: " << sizeof(0) << endl;
	cout << "sizeof true: " << sizeof(true) << endl;
	cout << "sizeof false: " << sizeof(false) << endl;
	return 0;
}