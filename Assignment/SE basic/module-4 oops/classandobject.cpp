//class and object //
#include<iostream>
#include<string>
using namespace std;

class Teacher {
	public :   //data // properties // attribute
	string name;
	string dept;
	string subject;
	double salary;
    // method // member function//
    void changeDept(string newDept) {
    	dept = newDept;
    }

}; 

int main () {
	Teacher t1;
	t1.name;
	t1.dept;
	t1.subject;
	t1.salary;
	cout<<"Dinesh Singh"<<endl;
	cout<<"It"<<endl;
	cout<<"c++"<<endl;
	cout<< 25000<<endl;
	Teacher t2;
	t2.name;
	t2.dept;
	t2.subject;
	t2.salary;
	cout<<"Rohan"<<endl;
	cout<<"front"<<endl;
	cout<<"java"<<endl;
	cout<< 10000<<endl;
	
	
}

