/*3. Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */
#include<iostream>
#include<string>
using namespace std;

class person{
	public :
		string name ;
		int age;
		void per(){
			cout<<"Enter Your name :"<<endl;
			cin>>name;
			cout<<"enter your age :"<<endl;
			cin>>age;
		
};

class student : public person{
	public:
	float percentage;
	void stu(){
	cout<<"enter your percentage :"<<endl;
	cin>>percentage;
	}
	
};
class teacher : public student{
	public:
		double salary;
		
		void fun(){
			cout<<"Enter Your name :"<<endl;
			cin>>name;
			cout<<"enter your age :"<<endl;
			cin>>age;
			
			cout<<"Enter your salary:"<<endl;
			cin>>salary;
		}
};

int main (){
	teacher obj;
	obj.fun();
}
