//디폴트 매개변수를 가진 함수 선언 및 호출
#include <iostream>
#include <string>
using namespace std;
void star(int a = 5);
void msg(int a, string p="");
int main() {
	star();
	star(10);
	msg(10);
	msg(10, "Hello");
	return 0;
}
void star(int a ) {
	for (int i = 0; i < a; i++) {
		cout << '*';
		
	}
	cout << endl;
}
void msg(int a, string p ) {
	cout << a << ' ' << p << endl;
}