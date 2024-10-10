/* 6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/ 

#include<iostream>
#include<string>
using namespace std;

class Employee {
	private:
		string name;
		int empid;
		double salary;
		
		// creating constractor 
	public:
		Employee () {
		 name = "";  // Initially set name to an empty string
        empid = 0;  // Initialize empid to 0
        salary = 0; // Initialize salary to 0
			}
			
			
			void fun(){
				cout<<"Enter Name :"<<endl;
				cin>>name;
				cout<<"Employee id :"<<endl;
				cin>>empid;
			}
		void salar () {
			int rating;
			
				cout<<"give Rating (out of 100) :"<<endl;
				cin>>rating;
				if (rating >= 50) {
				cout<<"salary  = 25000;"<<endl;
					} else {
			cout<<"salary = 15000;"<<endl;
				}
			}
};
int main () {
	Employee obj; //creating object
	obj.fun();   // get employee detail
	obj.salar(); // calulate and display salary
	return 0;
}
