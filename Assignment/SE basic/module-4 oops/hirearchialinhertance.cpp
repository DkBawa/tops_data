// Hierarchial inheritence //
#include<iostream>
#include<string>
using namespace std;

class person{
	public :
		string name ;
		int age;
		
};
class teacher :public person{
	public :
	int salary;
		void detail(){
			cout<<"enter your name :"<<endl;
			cin>>name;
			cout<<"Enter Your age :"<<endl;
			cin>>age;
			cout<<"enter your salary :"<<endl;
			cin>>salary;
		}
};
class student :public person {
public:
	string sub;
		void detal(){
			cout<<"enter your name :"<<endl;
			cin>>name;
			cout<<"Enter Your age :"<<endl;
			cin>>age;
			
			cout<<"Enter Your subject :"<<endl;
			cin>>sub;
			}
};
int main (){
	teacher obj;
	obj.detail();
	student obj2;
	obj2.detal();
	
 return 0;
}
