//디폴트 매개변수를 이용하여 중복 함수 간소화 연습
#include <iostream>
#include <string>
using namespace std;
void fillLine(int n = 25, char c = '*');
int main() {
	fillLine();
	
	fillLine(10, '%');
	return 0;
}
void fillLine(int n, char c) {
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}