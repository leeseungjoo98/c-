#include <iostream>
using namespace std;
typedef enum magic {
	fire = 0,
	water,
	ilusion,
	light,
	poison
}magic;
int main() {
	magic skill;
	skill = light;
	switch (light) {
	case fire:
		cout << "불";
		break;
	case water:
		cout << "물";
		break;
	case ilusion:
		cout << "환상";
		break;
	case light:
		cout << "빛";
		break;
	case poison:
		cout << "독";
		break;
	default:
		break;
	}

	return 0;

}