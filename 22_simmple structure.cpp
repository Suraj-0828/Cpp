#include <iostream>
using namespace std;
//===========structure===========

struct employee{
	string name;
	int id;
	int age;
	float height;
	double salary;
};

int main(){
	employee emp;
	emp.name = "suraj";
	emp.id = 02;
	emp.age = 22;
	emp.height = 5.9;
	emp.salary = 45000;
	
	cout<<"==============================="<<endl;
	cout<<"this is employee name :"<<emp.name<<endl;
	cout<<"this is employee id :"<<emp.id<<endl;
	cout<<"this is employee age :"<<emp.age<<endl;;
	cout<<"this is employee height :"<<emp.height<<endl;
	cout<<"this is employee salary :"<<emp.salary<<endl;
	return 0;
}
