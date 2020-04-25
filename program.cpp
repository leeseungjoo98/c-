//////// 몫과 나머지 출력 program
#include <iostream>
using namespace std;
struct list {
	int number1;
	int number2;
	int result;
	int remain;
	int count(int number1, int number2, int *remain);
};
int main() {
	struct list p1;
	cout << "입력1:";
	cin >> p1.number1;

	cout << "입력2:";
	cin >> p1.number2;
	p1.result = p1.count(p1.number1, p1.number2, &p1.remain);
	cout << " 몫:" << p1.result << endl;
	cout << "나머지 :" << p1.remain << endl;
}
int inline list::count(int number1, int number2, int *remain) {
	int result = number1 / number2;
	*remain = number1 % number2;
	return result;

}