#include <iostream>
using namespace std;
class para_array{
	public :
		void data(int array[]){
			int a;
			for(a=0; a<=4; a++){
				cout<<"This is parameter using array print :"<<array[a]<<endl;
			}
		}
};
