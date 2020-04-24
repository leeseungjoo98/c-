//////////문자열 매개변수 사용하기
#include <iostream>
#include <cstdlib>

using namespace std;
void printout(char *print1, char *print2);
int main() {
	char *sentence1 = new char[156];
	char *sentence2 = new char[156];
	cout << "문자열 입력 :";
	cin >> sentence1;
	cout << "문자열 입력 :";
	cin >> sentence2;
	printout(sentence1, sentence2);
	
	return 0;
}
void printout(char *print1, char *print2) {

	if (strcmp(print1, print2) == 0)
	{
		cout << "같음";

	}
	else
		cout << "다름";


}