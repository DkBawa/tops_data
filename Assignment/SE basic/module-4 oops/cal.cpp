//1. WAP to create simple calculator using class
#include<iostream>
#include<string>
using namespace std;

class cal {
	public:
	int num1,num2; // in this line we store 2 value form user in variable
	show(){  // bulid this  fun / method  to take input from user
			
cout<<"enter num1"<<endl;
cin>>num1;
cout<<"enter num2"<<endl;
cin>>num2;
	}
	  // creating multipal fun for multiple task
	add(){
		cout<<"Addition is :"<<num1 +num2<<endl;
	}
		subtrat(){
		
		if (num1 > num2 ) {
			cout<<"Subtaaction is :"<<num1 -num2 <<endl;
		} else {
			cout<<"enter num 2 value is  greter then num 1 :"<<endl;
			}
	}
		divi(){
			
			if (num1 > num2 ) {
				cout<<"Division is :"<<num1 / num2 <<endl;
			} else {
				cout<<"enter num1 value greater then num2 :"<<endl;
			}
		}
		multi(){
		cout<<"Subtaaction is :"<<num1 * num2 <<endl;
	} 
};

int main () { 
     // cal all func to get result;
	cal obj;
	obj.show();
	obj.add();
    obj.subtrat();
    obj.divi();
    obj.multi();
    }
