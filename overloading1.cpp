//함수의 오버로딩
#include <iostream>
using namespace std;
int big(int a, int b);
int big(int a[], int size);
int main() {
	cout << "big(2, 3)"<< big(2, 3) << endl;
	int array[] = { 1,9,-2,8,6 };
	cout << "big(array,5)" << big(array, 5) << endl;
	return 0;
}
int big(int a, int b) {
	if (a > b) return a;
	else return b;
}
int big(int a[], int size) {
	int res = a[0];
	for (int i = 0; i < size; i++)
		if (res < a[i]) res = a[i];
			return res;
	

}