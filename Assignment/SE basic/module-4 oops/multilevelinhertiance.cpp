// multilavel inheritence //
#include<iostream>
#include<string>
using namespace std;

class person{
	public :
		string name ;
		int age ;
		
};
class sub :public person{
	public :
		string subject ;
		
};
class student :public sub {
	public :
		string roll;
		
		void detail(){
			cout<<"enter your name :"<<endl;
			cin>>name;
			cout<<"Enter Your age :"<<endl;
			cin>>age;
			
			cout<<"Enter Your subject :"<<endl;
			cin>>subject;
			
			cout<<"Enter Your roll no :"<<endl;
			cin>>roll;
		}
};
int main (){
	student obj;
	obj.detail();
}
