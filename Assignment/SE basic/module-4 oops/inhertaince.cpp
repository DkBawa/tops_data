// CONSTRCTOR
#include<iostream>
using namespace std;

class A{
	public:
		home() // constrctor 
		{
			 
			 cout<<"Grandfather has a home"<<endl;
		
		}
	};
	
	class F : public A{
	public:
		car() // constrctor 
		{
			
			cout<<"Father has a car"<<endl;
		
		}
	};
	
	class C : public F{
	public:
		respect() // constrctor 
		{
			cout<<"I achive respect"<<endl;
		
		}
	};
	main () {
		C obj;
		obj.home();
		obj.car();
		obj.respect();
	}
	
	
