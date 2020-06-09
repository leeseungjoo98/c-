//문자열 처리 응용 -덧셈 문자열을 입력 받아 덧셈 실행
#include <iostream>
#include <string>
using namespace std;
int main() {
	string sentence;
	cout << " 7+23+5+100+25와 같이 덧셈 문자열을 입력하세요!!" << endl;
	getline(cin, sentence, '\n'); 
	int startIndex = 0;
	int sum = 0;
	while (true) {
		int findex = sentence.find('+', startIndex);
		if (findex == -1) {
			string p1 = sentence.substr(startIndex);
			if (p1 == "")break;
			cout << p1 << endl;
			sum += stoi(p1);
			break;
		}
		int count = findex - startIndex;
		string p1 = sentence.substr(startIndex, count);
		cout << p1 << endl;
		sum += stoi(p1);
		startIndex = findex + 1;

	}
	cout << " 숫자들의 합은 : " << sum;
	

}