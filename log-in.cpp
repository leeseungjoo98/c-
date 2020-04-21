#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	char ID[100];
	char PASSWORD[100];
	cout << "ID : ";
	cin >> ID;
	cout << "PASSWORD :";
	cin >> PASSWORD;
    char A[100] = "leeseungjoo98" ;
	char B[100] =  "podjwlkd" ;
	int number = strcmp(ID, A);
	int number1 = strcmp(PASSWORD, B);
	if (number == 0)
	{
		if (number1 == 0)
			cout << "sucess" << endl;
		else
			cout << "check the password " << endl;
	}

	else 
		cout << "check the ID or PASSWORD"<<endl;

	



	return 0;

}


