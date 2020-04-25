#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable : 4996)
void addout( char *p1,char *p2);
int main() {
	char *sentence1 = new char[256];
	char *sentence2 = new char[256];
	cout << "문자열 입력1:";
	cin >> sentence1;

	cout << "문자열 입력2:";
	cin >> sentence2;
	addout( sentence1, sentence2);
	
	return 0;
}
void addout(char *p1,  char *p2) {
	cout << p1 << endl;
	cout << p2 << endl;
	cout << strcat(p1, p2);
}