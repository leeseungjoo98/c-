//문자열 find 및 replace
#include <iostream>
#include <string>
using namespace std;
int main() {
	int startIndex = 0;
	string s;
	cout << " 문자열 입력 마지막은 &:" << endl;
	getline(cin, s, '&');
	cin.ignore();
	cout << " --------------------------------------" << endl;
	string input, insert;
	cout << " 찾는 문자열 :";
	getline(cin, input, '\n');

	cout << " 대치할 문자열: ";
	getline(cin, insert, '\n');
	while (true) {
		int findex = s.find(input, startIndex);
		int number = input.length();
		if (findex == -1)
			break;
		s.replace(findex, number, insert);
		startIndex = findex + 1;

	}

	cout << s << endl;


}