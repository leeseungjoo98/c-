//////////////자동차 계기판 구조체 선언하기
#include <iostream>
using namespace std;
typedef struct {
	int Speed;
	char Fuel;
	float Mileage;
	int Engine_temp;
	int RPM;


}imformation;

int main() {
	imformation avante={80, 'F',5821.442871, 200,1830 };
	cout << "차 계기판 --------------" << endl;
	cout << "Speed: " << avante.Speed << "km/h"<<endl;
	cout << "Fuel: " << avante.Fuel << endl;
	cout << "Mileage: " << avante.Mileage << "km" <<endl;
	cout << "Engine temp: " << avante.Engine_temp << "'c"<< endl;
	cout << "RPM: " << avante.RPM << endl;

	return 0;
}