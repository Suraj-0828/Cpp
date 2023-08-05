#include <iostream>
using namespace std;
struct product{
	int price;
	int quantity;
	int gst;
};
int main(){
	int final_gst,final_price,c; // own use for
	product p;
	cout<<"Enter the price :";
	cin>>p.price;
	cout<<"Enter the quantity :";
	cin>>p.quantity;
	cout<<"Enter the gst :";
	cin>>p.gst;
	
	// calculate the formula gst
	final_gst = (p.price*p.gst)/100;
	final_price = (p.price+final_gst)*p.quantity;
	
	cout<<"===================================="<<endl;
	cout<<"This is price :"<<p.price<<endl;
	cout<<"This is quantity :"<<p.quantity<<endl;
	cout<<"This is gst :"<<p.gst<<endl;
	cout<<"===================================="<<endl;
	cout<<"This is taxt-gst charge :"<<final_gst<<endl;
	cout<<"===================================="<<endl;
	cout<<"THIS IS FINAL MRP :"<<final_price<<endl;
	return 0;
}
