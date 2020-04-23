/////////////2차원 평면상에서 좌표를 표현할 수 있는 구조체

#include <iostream>
using namespace std;
typedef struct Point {
	int xpos;
	int ypos;
	void MovePos(int x, int y) {
		xpos += x;
		ypos += y;

	}

	void ShowPosition() {
		cout << xpos << "," << ypos << endl;
		
		 
	}
	void AddPoint(const Point &pos) {
		xpos =xpos +  pos.xpos;
		ypos =ypos + pos.ypos;

	}

}Point;

int main() {
	Point pos1 = { 12,4 };
	Point pos2 = { 20,30 };
	pos1.MovePos(-7, 10);//점의 좌표 이동
	pos1.ShowPosition(); //[5,14] 도출하도록
	pos1.AddPoint(pos2);//점의 좌표 증가
	pos1.ShowPosition();//[25,44] 도출하도록

	return 0;
}
