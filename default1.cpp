//디폴트 매개변수를 가진 함수 만들기 연습
#include <iostream>
#include <string>
using namespace std;
void f(char text = ' ', int j = 1);
int main() {
	f();
	f('%');
	f('@', 5);
	return 0;
}
void f(char text, int j) {
	for (int a = 0; a < j; a++) {

		for (int i = 0; i < 10; i++)
		{
			cout << text;
		}		
		cout << endl;
	
	}
	
}