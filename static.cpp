//static 멤버 사용
#include <iostream>
using namespace std;
class Person {

public :
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int money) {
		sharedMoney += money;
	}

};
int	Person::sharedMoney = 10;
int main() {
	Person::addShared(50); //60
	cout << Person::sharedMoney << endl;
	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 300;
	Person::addShared(100); 
	cout << Person::sharedMoney << endl;


	
}