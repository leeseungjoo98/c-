//참조 매개변수 만들기 
#include <iostream>
#include <string>
using namespace std;
char & find(char c[], int index) {
	return c[index];
}

int main() {
	char sentence[] = "MIKE";
	find(sentence, 0) = 's';
	cout << sentence << endl;
	char &p=find(sentence, 2);
	p = 't';
	cout << sentence << endl;


	return 0;

}