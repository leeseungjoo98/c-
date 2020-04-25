#ifndef __HEAD_H__
#define __HEAD_H__
#include <iostream>
using namespace std;
class Calculator {
private:
	float x1;
	float y1;
	
public :
	float ADD(float xcomponent, float ycomponent);
	float DIV(float xcomponent, float ycomponent);
	float MIN(float xcomponent, float ycomponent);
	

};
float inline Calculator::ADD(float xcomponent, float ycomponent) {
	this->x1=xcomponent;
	this->y1 = ycomponent;
	float result = x1 + y1;
	return result;
	
}
float inline Calculator::DIV(float xcomponent, float ycomponent) {
	this->x1 = xcomponent;
	this->y1 = ycomponent;
	float result = x1 / y1;
	return result;

}
float inline Calculator::MIN(float xcomponent, float ycomponent) {
	this->x1 = xcomponent;
	this->y1 = ycomponent;
	float result = x1 - y1;
	return result;

}




#endif // !