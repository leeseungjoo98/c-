//string 클래스를 이용한 문자열 생성 및 출력
#include <iostream>
#include <string>
using namespace std;
int main() {

	string first("서울시 성북구 삼선동 389");
	string copy(first);
	cout << "first" <<first << endl;
	cout << "copy" <<copy << endl;

	char text[] = { 'l','o','v','e', ' ','++','\0' };
	string second(text);
	cout << "second " << second << endl;
	second.append("seungjoo ");
	cout << "second " << second << endl;
	
}