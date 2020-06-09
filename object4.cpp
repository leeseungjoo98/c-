//Circle객체의 동적 생성 및 반환 응용
#include <iostream>
using namespace std;
class Circle {
	int radius;
public : 
	Circle();
	~Circle() {}
	
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	
};
Circle::Circle() {
	radius = 1;
	
}
int main(){
	int number;
	int a;
	int j = 0;
	cout << " 생성하고자 하는 원의 개수 : ";
	cin >> number;
	Circle *object = new Circle[number];
	for (int i = 0; i < number; i++)
	{

		cout << "원" << i + 1 << ": ";
	
		cin >> a;
		object[i].setRadius(a);

	}
	for (int i = 0; i < number; i++)
	{
		cout << object[i].getArea() << "  ";
		if (object[i].getArea() >=100 && object[i].getArea() <= 200)
		{
			
			j++;
		}

	}
		
		
		
	cout << " 면적이 100에서 200 사이인 원의 개수는 :" << j << endl;
		
	
		
       delete [] object;
	
}