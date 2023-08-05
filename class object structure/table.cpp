#include <iostream>
using namespace std;
class table{
	public :
		void number(int b){
			int a;
			for(a=1; a<=10; a++){
				cout<<b<<"x"<<a<<"="<<b*a<<endl;
			}
		}
};
