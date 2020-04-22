/////////////////////동아리 주소록 시스템 만들기
#include <iostream>
using namespace std;

typedef struct book {
	char name[10];
	char phone_number[14];
	int age;
	char relationship[50];
}book;
void printout(book b);
int main() {
	 book b;
	
	
	cout << "---------동아리 주소록 등록---------" << endl;
	cout << "이름 : ";
	cin >> b.name;
	cout << "전화번호:";
	cin >> b.phone_number;
	cout << "나이:";
	cin >> b.age;
	cout << "나와의 관계:";
	cin >> b.relationship;
	printout(b);

	return 0;

}
void printout(book b) {
	cout << "--------------------------------" << endl;
	cout << "이름 : " << b.name << endl;
	cout << "전화번호:" << b.phone_number << endl;
	cout << "나이:" << b.age << endl;
	cout << "나와의 관계:" << b.relationship << endl;
	cout << "--------------------------------" << endl;

}