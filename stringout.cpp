#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable : 4996)
int main() {
	char *sentence1 = new char[256];
	char *sentence2 = new char[256];
	cout << "문자열 입력1:";
	cin >> sentence1;

	cout << "문자열 입력2:";
	cin >> sentence2;
	cout <<strcat(sentence1, sentence2);
	return 0;
}