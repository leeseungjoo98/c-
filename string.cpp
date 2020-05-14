///string 클래스를 활용하여 문자열 오른쪽으로 회전하는 프로그램
#include <iostream>
#include <string>
using namespace std;
int main() {

	string s;
	getline(cin, s, '\n');
	int len = s.length();//i love you
	for (int i = 0; i < len; i++) {
		string front =s.substr(len-1, 1);
		string sub = s.substr(0, len - 1);
		s=front + sub;
		cout << s<<endl;

	}
	return 0;

}