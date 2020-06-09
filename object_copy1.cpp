//깊은 복사 생성자
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;
class Person {

private :
	int id;
	char *name;
public :
	Person(int id, char *name);
	Person(Person &a);
	~Person();
	void change(char *name);
	void show();

};
Person::Person(int id, char *name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len+1];
	strcpy(this->name, name);
}
Person::Person(Person &a) {
	this->id=a.id;
	int len = strlen(a.name);
	this->name = new char[len + 1];
	strcpy(this->name, a.name);
}
Person::~Person() {
	if (name)
		delete[] name;
}
void Person::change(char *name) {
	if (strlen(this->name) < strlen(name))
		return;
	strcpy(this->name, name);
}
void Person::show() {
	cout << "id: " << id << "|" << "name" << *name;
}
int main() {
	Person father( 1 , "Kitae");
	Person daughter(father);
	cout << "daughter 객체 생성 직후 -- " << endl;
	father.show();
	daughter.show();
	daughter.change("Grace");
	cout << "daughter 이름을 Grace로 변경한 후" << endl;
	father.show();
	daughter.show();
	return 0;

}