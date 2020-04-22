/////////////////////학생 성적 저장 program with array and for문
#include <iostream>

int main() {
	int g;
	std::cout << "학생 총수:";
	std::cin >> g;
	int student;
	int sum = 0;
	int score[sizeof(g+1)];
	for (int i = 0; i < g; i++)
	{
		std::cout << "학생" << i + 1 << "의 성적:";
		std::cin >> student;
		score[i] = student;
		 sum  +=score[i];
	
	}
	int avg = sum /g;
	std::cout << "학생 성적 평균 : " << avg << std::endl;
	std::cout << "sizeof(10)=" << sizeof(10) << std::endl;

	return 0;

}
