#include <iostream>
using namespace std;
int main(){
	//check leap year
	int a;
	cout<<"Enter the year :"<<endl;
	cin>>a;
	if(a % 4 == 0){
		cout<<"This is leap year :"<<a<<endl;
	}
	else{
		cout<<"This is not a leap year :"<<a<<endl;
	}
	return 0;
}
