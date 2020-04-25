///C++에서 파일분할
#pragma warning(disable : 4996)
#include <iostream>
#include<cstring>
#include "head.h"
using namespace std;

int main() {
	Car p1;
	p1.Add_ID("pool9789", 100);
	p1.Accel();
	p1.Accel();
	p1.Accel();
	p1.printout();
	p1.Break();
	p1.printout();
	return 0;
	
}
