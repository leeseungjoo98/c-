#include <iostream>
namespace Parent {
	int num = 2;
	namespace SubOne {
		int num = 3;
	}
	namespace SubTwo {
		int num = 4;

	}
} 

int main() {
	std::cout << "Parent::num :" <<Parent::num << std::endl;
	std::cout << "Parent::SubOne::num :" << Parent::SubOne::num << std::endl;
	std::cout << "Parent::SubTwo::num :" << Parent::SubTwo::num << std::endl;
}