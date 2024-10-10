// Abtraction means data hiding //
#include<iostream> 
using namespace std;

class Employee { // abtract class
public: 
info(){
		cout<<"Your salary will transfer in your account "<<endl;
	}
 virtual salary()=0;// pure virtual function
	
	};
 class Dinesh:public Employee { 
 public:
 	Salary() {
 		 cout<<"You got your salary 1 lac"<<endl;
	 }
 };
 
 class Rahul:public Employee {
 	public:
 	Salary() {
 		 cout<<"You got your salary 20k"<<endl;
	 }
 	
 };
  class Rohan:public Employee {
  	public:
 	Salary() {
 		 cout<<"You got your salary 25k"<<endl;
	 }
 	
 };


main () {
	
	Dinesh obj;
	obj.info();
	obj.Salary();
	
	Rahul obj;
	obj.info();
	obj.Salary();
	
	Rohan obj;
	obj.info();
	obj.Salary();
	
} 
