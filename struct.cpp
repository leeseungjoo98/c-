#include <iostream>
#include <cstring>
using namespace std;
struct student {
	char name[100];
	int number;
	char blood;
	char sex[10];

};
void output(student as);
int main() {
	struct student s;

	cout << "학생정보 입력--------------" << endl;
	cout << "이름:";
	cin >> s.name;



	cout << "학번: ";
	cin >> s.number;


	cout << "혈액형:";
	cin >> s.blood;


	cout << "성별:";
	cin >> s.sex;


	output(s);
	return 0;
}
void output(student as) {
	cout << "----------------------------------------------" << endl;
	cout << "이름:" << as.name << endl;
	cout << "학번:" << as.number << endl;
	cout << "혈액형:" << as.blood << endl;
	cout << "성별:" << as.sex << endl;

}