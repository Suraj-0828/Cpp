#include <iostream> 
using namespace std;


class student{

    public:
	void info(){

        cout<<"Codeswithpankaj"<<endl;
    }

    public:
	void info(string website){

        cout<<website<<endl;
    }

    public:
	void info(string website, int unit){

        cout<<website<<unit<<endl;
    }
    public:
	void info(string website, string domain){

        cout<<website<<domain<<endl;
    }

};


main(){

    student st;
    
    st.info("codewithprofessors");
    st.info("professor_suraj",900);
    st.info("suraj",".in");

    return 0;
}
