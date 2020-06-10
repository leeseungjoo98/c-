#include <iostream>
using namespace std;
class Person {
	static int money;

public :
	static void addMoney(int money);
	 int get();
};
int Person::money = 0;

void Person::addMoney(int a) {
	money = a;
}
int Person::get() {
	return money;
}
int main() {
	Person::addMoney(10000);
	Person a;
	cout << a.get() << endl;
}