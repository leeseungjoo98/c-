//////////////장치 종류 정의하기
#include <iostream>
using namespace std;
typedef enum  DEVICE_TYPE {
	DEVICE_PCI_EX = 2,
	DEVICE_IEEE1394,
	DEVICE_USB


}DEVICE_TYPE;
int main() {
	
	DEVICE_TYPE product;
	product = DEVICE_IEEE1394;
	cout << product;
	return 0;
}