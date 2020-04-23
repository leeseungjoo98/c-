///학생 성적검색 program ver 포인터 배열
#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int amount;
	cout << "총 인원 :";
	cin >> amount;
	int *score = new int[amount];
	int number;
	for (int j = 0; j < amount; j++) {
		cout << "학생" << j + 1 << "의 성적 :";
		cin >> score[j];
		
}
	cout << "학생출석번호: ";
	cin >> number;
	int *g = score;
	cout << "학생" << number + 1 << "번:" << score[number];
	cout << "학생" << number + 1 << "번:" << g[number];
	delete [] score;
	return 0;
}
