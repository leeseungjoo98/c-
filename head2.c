///////////////////문제2 문자열 정보를 내부에 저장하는 Printer 라는 클래스를 디자인하자 
/////////////이 클래스의 두가기 기능은 1.문자열 저장, 2. 문자열 출력
#pragma warning(disable : 4996)
#include <cstring>

#include<iostream>
#ifndef __HEAD_H__
#define __HEAD_H__

class Printer {
private :
	char *sentence = new char[256];
	
	
public :
	void storage(const char *input);
	void printout();
	

};
void inline Printer::storage(const char *input) {
	strcpy(sentence, input);
}
void inline Printer::printout() {
	std::cout << "문자열 출력:" << sentence << std::endl;

}
#endif // !__HEAD_H__

