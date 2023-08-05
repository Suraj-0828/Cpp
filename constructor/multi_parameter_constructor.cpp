#include <iostream>
using namespace std;
class overloading_constructor{
	public :
		overloading_constructor oc(){
			cout<<"this is first multi parameter constructor"<<endl;
		}
		
	public :
		overloading_constructor oc(int a,int b){
			cout<<"This is second parameter constructor"<<endl;
		}	
		
	public :
		multi_parameter_constructor oc(int a,int b){
			cout<<"This is multi_parameter_constructor using addition"<<a+b<<endl;
		}	
};
