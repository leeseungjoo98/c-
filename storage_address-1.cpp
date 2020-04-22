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
	book array[3] = { {"이승주", "01011111111",24,"나"},
	{ "김호진", "0102222222", 31,"부장"},{ "이지훈", "01033333333", 60,"교수님" } };
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
