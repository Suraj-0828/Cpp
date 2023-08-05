#include <iostream>
using namespace std;

	// pass object to function
	class student{
		public :
			double marks;
			// constructor to initialize marks
			student(double m){
				marks = m;					
			}
			
			// funtion that has object as parameter
		public :
			void calculateaverage(student s1,student s2){
			// calculate the average of marks of s1 and s2
			double average = (s1.marks + s2.marks)/2;
			
			cout<<"Average Marks :"<<average<<endl;
			}
	};
	
	int main(){
		student student1(8.0), student2(6.0);
		// pass the object as arguments
		//student1 lo ye 2 answer same print karta hai
		student1.calculateaverage(student1,student2);
		return 0;
	}

