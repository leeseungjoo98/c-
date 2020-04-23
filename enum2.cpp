//////////////게임스킬 처리하기
#include <iostream>
using namespace std;
typedef enum  VayneSkill{
	Tumbel = 1,// 구르기
	SilverBolts,//은화살
	condemn ,// 선고
	FinalHour//결전의 시간

} VayneSkill;
int main() {
	VayneSkill skill;
	skill = Tumbel;
	switch (skill) {
	case Tumbel:
		cout << "구르기";
		break;
	case SilverBolts:
		cout << "은화살";
		break;
	case condemn:
		cout << "선고";
		break;
	case FinalHour:
		cout << "결전의 시간";
		break;
	default:
		break;
	}
	return 0;
}