// encaplosion
#include<iostream>
using namespace std;
 
 class A {
 	public:
 		int c,d;
 		hello1() {
 			int a, b;
 		cout<<"Enter A :";
 		cin>>a;
 		cout<<"Enter B :";
 		cin>>b;
 		this->c=a;
 		this->d=b;
		 }
 		hello2() {
 			cout<<"A :"<<this->c;
 			cout<<"B :"<<this->d;
		 }
 	
 		}; 
main () {
	A obj;
	obj.hello1();
	obj.hello2();
	
	
}
