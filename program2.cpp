///class를 이용하여 몫과 나머지 출력 program
#include <iostream>
using namespace std;
class list {
private:
	int number1;
	int number2;
	int result;
	int remain;
public : 
	void count(int q1,int q2);
	void print();
};
int main() {
	list p1;
	int a_number1, a_number2, a_result;
	
	cout << "입력1:";
	cin >> a_number1;

	cout << "입력2:";
	cin >> a_number2;
	p1.count(a_number1, a_number2);
	p1.print();
}
void inline list::count(int q1, int q2) {
	
	this->result = q1 / q2;
	this->remain =q1 % q2;
	

}
void inline list::print() {
	cout << "몫:" << result << endl;
	cout << "나머지:" << remain << endl;
}