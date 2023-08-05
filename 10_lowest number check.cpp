#include <iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	//check largest number of three number
	cout<<"Enter the first number1 :"<<endl;
	cin>>num1;
	cout<<"Enter the second number2 :"<<endl;
	cin>>num2;
	cout<<"Enter the third number3 :"<<endl;
	cin>>num3;
	
	if(num1<num2 && num1<num3){
		cout<<"number1 is bigger number :"<<num1<<endl;
	}
	else if(num2<num3 && num2<num1){
		cout<<"number2 is bigger number :"<<num2<<endl;
	}
	else{
		cout<<"number3 is bigger number :"<<num3<<endl;
	}
	return 0;
}
