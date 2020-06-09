//string 클래스를 이용한 문자열 키 입력
#include <iostream>
#include <string>
using namespace std;
int main() {
	string list[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "이름 >>";
		getline(cin, list[i], '\n');
		
	}
	string book = list[0];
	for (int i = 0; i < 5; i++)
	{
		if (book < list[i])
			book = list[i];
	}
	cout << " 사전에서 가장 뒤에 나오는 문자열은 " << book << endl;
}