//inhertance //
#include<iostream>
#include<string>
using namespace std;

class person{
    public :
	string name ;
	int age;
	
	};	class student : public person {
		// jese yaha ham name and age base class person se 
		// access krenge and Age properties ham student se lenge
		// name ,age ,rollno
	public:
	int roll;
	
	void fun(){
		cout<<"enter your roll no :"<<endl;
		cin>>roll;
			cout<<"Enter Your Name :"<<endl;
			cin>>name;
			cout<<"Enter Your age :"<<endl;
			cin>>age;
		
	}
	};
	
int main (){
	student obj;
	obj.fun();
	
	return 0;
}
