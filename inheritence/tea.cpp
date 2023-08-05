#include <iostream>
using namespace std;
#include "chai_nasta.cpp";
class tea : public chai_nasta{
	public :
		void dring(){
			cout<<"Tea break"<<endl;
		}
};
