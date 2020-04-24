//////////////////////변수 변환 ver void * 를 매개변수로 이용, enum과 switch이용
#include <iostream>
using namespace std;
enum list {
	TYPE_INT=0,
	TYPE_CHAR,
	TYPE_FLOAT
};
void change(void *p, void *q,enum list pool9789);
int main() {
	char c1 = 'A';
	char c2 = 'B';
	change(&c1, &c2,TYPE_CHAR);
	cout << "c1=" << c1 << "/" << "c2=" << c2 << endl;
	int num1 = 1;
	int num2 = 3;
	change(&num1, &num2,TYPE_INT);
	cout << "num1=" << num1 << "/" << "num2=" << num2 << endl;
	float float1 = 1.2344;
	float float2 = 34.5665;
	change(&float1, &float2,TYPE_FLOAT);
	cout << "float1=" << float1 << "/" << "float2=" << float2 << endl;
	return 0;
}
void change(void *p, void *q, enum list pool9789) {
	switch (pool9789) {
	case TYPE_INT:
	{	int temp;
	temp = *(int *)p;
	*(int*)p = *(int *)q;
	*(int *)q = temp;
	break; }
	case TYPE_CHAR:
	{char temp;
	temp = *(char *)p;
	*(char *)p = *(char *)q;
	*(char *)q = temp;
	break; }
	case TYPE_FLOAT:
	{float temp;
	temp = *(float *)p;
	*(float *)p = *(float *)q;
	*(float *)q = temp;
	break; }
	}
}