#include <iostream>
using namespace std;
#include "food.cpp";
class client : public food{
	public :
		void clientname(){
			cout<<"This is Suraj Jha site :"<<endl;
		}
};
