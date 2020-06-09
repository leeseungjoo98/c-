//생성자 함수의 중복 간소화
#include <iostream>

using namespace std;
class MyVector {
	int *p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() {
		delete[] p;
	}
};
int main() {
	MyVector *v1, *v2;
	v1 = new MyVector( );
	v2 = new MyVector(1024);
	delete v1;
	delete v2;
}