//string 클래스를 이용한 문자열 키 입력받고 회전시키기 #2
#include <iostream>
#include <string>
using namespace std;
int main() {
	
	cout << " 문자열을 입력하세요 (한글 안됨 ) :";
	string sentence;
	getline(cin, sentence, '\n'); //i love you
	int a = sentence.length(); //10
	for (int i = 0; i < a; i++) {
		string p1 = sentence.substr(a-1, 1);
		string p2 = sentence.substr(0, a - 1);
		sentence = p1 +p2;
		cout << sentence << endl;
	}
	



}