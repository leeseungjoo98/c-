////////////////클래스의 정의 : 계산기 기능의 calculator 클래스를 정의
#include <iostream>
#include "head1.h"
using namespace std;

int main() {
	float number1, number2;
	Calculator p1;
	cout << " 실수 입력1:";
	cin >> number1;
	cout << " 실수 입력2:";
	cin >> number2;
	cout <<number1<< " +" <<number2<<"="<< p1.ADD(number1,number2) << endl;
	cout << number1 << " -" << number2 << "=" << p1.MIN(number1, number2) << endl;
	cout << number1 << " /" << number2 << "=" << p1.DIV(number1, number2) << endl;


	return 0;

}

