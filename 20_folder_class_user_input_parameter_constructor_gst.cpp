#include <iostream>
using namespace std;
#include "C:\Users\SURAJ\Desktop\C++ Language\constructor\user_input_parameter_constructor_gst.cpp";
int main(){
	//input by user
	int price,quantity,gst;
	cout<<"Enter the price :"<<endl;
	cin>>price;
	cout<<"Enter the quantity :"<<endl;
	cin>>quantity;
	cout<<"Enter the gst :"<<endl;
	cin>>gst;
	
	user_input_parameter_constructor_gst(price,quantity,gst);
	return 0;
}
