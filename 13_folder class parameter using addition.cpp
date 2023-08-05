#include <iostream>
using namespace std;
#include "C:\Users\SURAJ\Desktop\C++ Language\class object structure\para_addition.cpp";
int main(){
//	para_addition pa;
//	pa.para_add(13,45);
//	return 0;

//input by user
	int num1,num2;
	cout<<"Enter the num1 value :"<<endl;
	cin>>num1;
	cout<<"Enter the num2 value :"<<endl;
	cin>>num2;
	
	para_addition pa;
	pa.para_add(num1,num2);
	return 0;
}
