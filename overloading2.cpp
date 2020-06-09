//함수의 오버로딩
#include <iostream>
using namespace std;
int sum(int a, int b);
int sum(int a);

int main() {

	cout <<  sum(3, 5) << '\t'  << sum(3) << '\t' <<  sum(100) << endl;
	return 0;
}
int sum(int a, int b) {
	int sum = 0;

	if (a < b) {
		for (int i = a; i <= b; i++)
		{
			sum += i;
			return sum;
		}
	}
	else if (a > b) {
		for (int i = b; i <= a; i++)
		{
			sum += i;
			return sum;
		}
	}
}
int sum(int a) {
	int sum = 0;
	for (int i = 0; i <= a; i++)
	{
		sum += i;
		return sum;
	}
}
/*
sum(3,5) 3~5까지의 합을 구하고 리턴
sum(3) 0~3까지의 합을 구하고 리턴
sum(100) 0~100까지의 합을 구하여 리턴
결과 
12	6	5050
*/