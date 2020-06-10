
#include <iostream>
using namespace std;
int sum(int a, int b);
int sum(int a);

int main() {

	cout << sum(3, 5) << '\t' << sum(3) << '\t' << sum(100) << endl;
	return 0;
}
int sum(int a, int b) {
	int sum = 0;

	if (a < b) {
		for (int i = a; i <= b; i++)
		{
			sum += i;
			
		}
		return sum;
	}
	else if (a > b) {
		for (int i = b; i <= a; i++)
		{
			sum += i;
			
		}
		return sum;
	}
}
int sum(int a) {
	int sum = 0;
	for (int i = 0; i <= a; i++)
	{
		sum += i;
		
	}
	return sum;
}