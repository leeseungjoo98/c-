//////////////////학생 성적 평균 계산 program
#include <iostream>


int main() {
	int g;
	std::cout << "학생 총수:";
	std::cin >> g;
	int student;
	int sum = 0;
	int* score = new int[g]; //g만큼 할당
	for (int i = 0; i < g; i++)
	{
		std::cout << "학생" << i + 1 << "의 성적:";
		std::cin >> student;
		score[i] = student;
		sum += score[i];
	}

	int avg = sum / g;
	std::cout << "학생 성적 평균 : " << avg << std::endl;

	delete[] score;  //반환

	return 0;
}