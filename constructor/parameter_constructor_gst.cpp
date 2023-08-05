#include <iostream>
using namespace std;
class parameter_constructor_gst{
	public :
		parameter_constructor_gst(int price,int quantity,int gst){
			int final_gst = (price*gst)/100;
			int final_price = (price+final_gst)*quantity;
			//own word using user input
			cout<<"This is price :"<<price<<endl;
			cout<<"This is quantity :"<<quantity<<endl;
			cout<<"This is gst :"<<gst<<endl;
			cout<<"----------------------------"<<endl;
			cout<<"This is FINAL MRF :"<<final_price<<endl;
		}
};
