#include<iostream>
using namespace std;
enum PROTOCOL_TYPE {
	PROTOCOL_IP=4,//4
	PROTOCOL_UDP,//5
	PROTOCOL_TCP,//6
};
int main() {
	enum PROTOCOL_TYPE p1, p2, p3;
	p1 = PROTOCOL_TCP;
	p2 = PROTOCOL_UDP;
	p3 = PROTOCOL_IP;
	cout << "p1=" << p1 << " " << "p2=" << p2 << " " << "p3= " << p3 << endl;
	return 0;

}