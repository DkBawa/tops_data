// inhertance overridng
#include<iostream>
using namespace std;
class A{
		public:
				int a, b;
			Hello(){
				cout<<"Hello :Dinesh Rajput"<<endl;
			}
		
};

class B{
	public:
		Hello()
		{
			cout<<"Hello :Dinesh Rajput"<<endl;
		}
};

class C:public A ,public B{
	public:
		Hello(){
			A::Hello();
			B::Hello();
			cout<<"Enter your Number"<<endl;
			cin>>a;
			cout<<"Enter your Number2"<<endl;
			cin>>b;
			} 
	};

main(){
	C Obj;
	Obj.Hello();
	
}
