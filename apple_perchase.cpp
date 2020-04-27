#include <iostream>
#include "head3.h"
using namespace std;

int main() {
	FRUIT_BUYER buyer;
	FRUIT_SELLER seller;
	seller.InitMembers(1000, 20, 0);
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);
	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}