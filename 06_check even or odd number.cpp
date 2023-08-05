#include <iostream>
using namespace std;
int main(){
	//check number even or odd
	int a;
	cout<<"Enter the number for even or odd :"<<endl;
	cin>>a;
	if(a % 2 == 0){
		cout<<"This is even number :"<<a<<endl;
	}
	else if(a % 1 == 0){
		cout<<"This is odd number :"<<a<<endl;
	}
	else{
		cout<<"Please enter correct format here"<<endl;
	}
	return 0;
}
