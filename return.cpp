//////////반환값으로 값 한 개 , 매개변수로 값 두개 꺼내기
#include <iostream>
using namespace std;
int   getnumber(int *p1,int  *p2);

int main() {
	int num1 = 0;
	int num2 = 0;
	int result;
	result = getnumber(&num1, &num2);
	cout << "result:" << result;
	return 0;
}
int   getnumber(int *p1, int *p2) {
	*p1 = 10;
	*p2 = 20;
	int result = *p1 + *p2;
	return result;
}