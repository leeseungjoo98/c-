///////////////////문제2 문자열 정보를 내부에 저장하는 Printer 라는 클래스를 디자인하자 
/////////////이 클래스의 두가기 기능은 1.문자열 저장, 2. 문자열 출력
#include <iostream>
#include "head2.h"
using namespace std;
int main() {

	Printer p1;
	char *string = new char[256];
	cout << "문자열 입력 :";
	cin >> string;
	p1.storage(string );
	p1.printout();
}