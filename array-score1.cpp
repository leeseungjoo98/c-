//////////////////////일차원 배열ver 동적배열
#include <iostream>
using namespace std;


int main() {
	cout << "원하는 숫자 :";
	int i, score;
	cin >> i;

	
	int *number = new int[i];

	for (int j = 0; j < i; j++) {
		cout << "학생 " << j + 1 << "의 성적:";

		cin >> score;
		number[j] = score;
	}
	cout << "--------------------------------" << endl;
	for (int j = 0; j < i; j++) {
		cout << "학생" << j + 1 << "의 성적:" << number[j] << endl;
		
	}
	delete[] number;
	return 0;
}