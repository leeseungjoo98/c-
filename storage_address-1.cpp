/////////////////////동아리 주소록 시스템 만들기#2
#include <iostream>
using namespace std;

typedef struct book {
	char name[10];
	char phone_number[14];
	int age;
	char relationship[50];
}book;

int main() {
	book array[3] = { {"이승주", "01096049789",21,"나"},
	{ "김희진", "01096019789", 50,"엄마"},{ "이남주", "01096029789", 60,"아빠" } };
	cout << "--------------------------------" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "이름 : " << array[i].name << endl;
		cout << "전화번호:" << array[i].phone_number << endl;
		cout << "나이:" << array[i].age << endl;
		cout << "나와의 관계:" << array[i].relationship << endl;
		cout << "--------------------------------" << endl;
	}
	return 0;

}
