#include <iostream>

namespace AAA {
	namespace BBB {

		namespace CCC {
			void Selection(int a,int b=3,int c=10);
		}
	}
}
	int main() {
		namespace ABC = AAA::BBB::CCC;
		ABC::Selection(1);
		return 0;


	}
	void AAA::BBB::CCC::Selection(int a,int b,int c) {
		std::cout << a + b + c << std::endl;
} 