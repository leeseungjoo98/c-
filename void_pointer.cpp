//////////////////////void 포인터 매개변수 사용하기
#include <iostream>
using namespace std;
enum list {
	TYPE_INT=0,
	TYPE_CHAR,
	TYPE_DOUBLE
};
void change(void *p, void *q);
int main() {
	char c1 = 'A';
	char c2 = 'B';
	change(&c1, &c2);
	cout << "c1=" << c1 << "/" << "c2=" << c2 << endl;
	
	return 0;
}
void change(void *p, void *q) {
	char temp;
	temp = *(char *)p;
	*(char *)p = *(char *)q;
	*(char *)q = temp;

	
}