#include <iostream>
#include <string>
using namespace std;
class TV {
private :
	int size;
public :
	TV() {
		size = 20;
	}
	TV(int size) {
		this->size = size;
	}
	int getSize() {
		return size;
	}
};
class WideTV : public TV {
	bool videoln;
public:
	WideTV(int size, bool videoln) :TV(size) {
		this->videoln = videoln;

	}
	bool getVideoln() {
		return videoln;
	}
};
class SmartTV : WideTV {
	string ipAdder;
public:
	SmartTV(string ipAdder, int size) :WideTV(size, true) {
		this->ipAdder = ipAdder;

	}
	string getlpaddr() {
		return ipAdder;
	}
};
int main() {

	SmartTV htv("192.0.0.1", 32);
	cout << "size= " << htv.getSize() << endl;
	cout << " videoln= " << boolalpha << htv.getVideoln() << endl;
	cout << "IP="<<htv.getlpaddr() << endl;



	return 0;


}