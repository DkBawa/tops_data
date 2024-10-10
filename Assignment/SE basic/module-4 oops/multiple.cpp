// multiple inheritence //
#include<iostream>
#include<string>
using namespace std;

class student{
	public :
		string name ;
		int roll ;
		
};
class teacher{
	public :
		string subject;
		int salary;
		
};
class teacher1 :public student,public teacher {

		public:
		void detail(){
			cout<<"enter your name :"<<endl;
			cin>>name;
			cout<<"Enter Your roll no :"<<endl;
			cin>>roll;
			
			cout<<"Enter Your subject :"<<endl;
			cin>>subject;
			
			cout<<"Enter Your salary :"<<endl;
			cin>>salary;
			}
};
int main (){
	teacher1 obj;
	obj.detail();
	
return 0;
}
