//////////////////////사과장수 program
#include <iostream>
using namespace std;
#ifndef __head_h__
#define __head_h__
class FRUIT_SELLER {
private :
	int APPLE_PRICE;//사과 가격
	int numOfApples;//보유중인 사과 개수
	int myMoney;//보유금액
public :
	void InitMembers(int price, int num, int money) {
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;

	}
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;//money는 사과판매로 얻은 이익,
		numOfApples -= num;
		myMoney += money;
		return num; //판 사과 수
	}
	void ShowSalesResult() {
		cout << "남은 사과 수:" << numOfApples << endl;
		cout << "판매수익 :" << myMoney << endl;
	}

};
class FRUIT_BUYER {
	int myMoney;//내 소지금
	int numOfApples;//이미 보유중인 사과수
public:
	void InitMembers(int money) {
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FRUIT_SELLER &SELLER, int money) {
		numOfApples += SELLER.SaleApples(money);
		myMoney -= money; //->money는 사과 산 금액 소비자가
	}
	void ShowBuyResult() {
		cout << "현재 잔액:" << myMoney << endl;
		cout << "사과 개수 : " << numOfApples << endl;
	}
};
#endif