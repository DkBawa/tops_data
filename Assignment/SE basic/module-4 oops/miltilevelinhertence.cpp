/* 5. Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance) */
#include<iostream>
#include<string>
using namespace std;
class student {
	public :
	int	rollno;
	void fun1(){
		cout<<"Enter roll no : "<<endl;
	cin>>rollno;
	}
	
};class test : public student{
	public :
		float mark1,mark2;
		string sub1,sub2;
	void fun2 (){
			cout<<"obetained mark in sub1 : "<<endl;
		cin>>mark1;
		cout<<"obetained mark in sub2 : "<<endl;
		cin>>mark2;
		
	}
}; class result : public test{
	public:
            void fun(){
            		cout<<"------Final Result ---------"<<endl;
	cout<<"Roll no :"<<rollno<<endl;
	cout<<"mark sub1 :"<<mark1<<endl;
	cout<<"mark sub2 :"<<mark2<<endl;
	cout<<"Total Marks :"<<mark1 +mark2<<endl;
			}
	
};

int main(){
	result obj;
	obj.fun1();
	obj.fun2();
	obj.fun();
}
