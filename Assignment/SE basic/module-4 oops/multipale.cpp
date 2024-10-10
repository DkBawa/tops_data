#include<iostream>
using namespace std;
class A{
	protected:
		int a,b;
		int c;
};

class B{
	public:
		Hello1()
		{
			cout<<"Hello :Dinesh Rajput"<<endl;
		}
};

class C:public A ,public B{
	public:
		Hello(){
			cout<<"Enter your Number"<<endl;
			cin>>a;
			cout<<"Enter your Number2"<<endl;
			cin>>b;
			
		} 
	
};

main(){
	C Obj;
	Obj.Hello1();
	Obj.Hello();
	
}
