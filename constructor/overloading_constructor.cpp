#include <iostream>
using namespace std;
class overloading_constructor{
	public :
		overloading_constructor(){
			cout<<"this is first multi parameter constructor :"<<endl;
		}
		
	public :
		overloading_constructor(int a,int b){
			cout<<"This is second parameter constructor :"<<a*b<<endl;
		}	
		
	public :
		multi_parameter_constructor(int a,int b){
			cout<<"This is multi_parameter_constructor using addition :"<<a+b<<endl;
		}	
};
