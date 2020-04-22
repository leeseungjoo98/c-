#include <iostream>

int main() {
	int a;
	int array[5] = { 1,2,3,4,5 };
	int length = sizeof(array) / sizeof(int);
	for (int i = 0; i < length; i++)
	{
		std::cout << array[i] << " ";

	}
	std::cout << std::endl;
	std::cout << length;

	return 0;

}
