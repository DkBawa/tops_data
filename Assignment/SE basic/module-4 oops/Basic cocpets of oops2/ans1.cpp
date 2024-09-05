// 1. WAP to create simple calculator using class 
#include<iostream>
using namespace std;

	class cal{
		int choice;
		int num1,num2;
public:
 
 cal() {
 		cout<<"Enter your Choice : 1 for Add , 2 for sub, 3 for Multi ,4 for divi"<<endl;
 	cin>>choice;
 		cout<<"Enter number 1 :"<<endl;
 	cin>>num1;
 		cout<<"Enter number 2"<<endl;
 	cin>>num2;
 	
			switch(choice) {
 		case 1:
 			cout<<"Addition is :"<<num1+num2<<endl;
 			break;
 			
	 	case 2:
			 
 			cout<<"Sub is :"<<num1-num2<<endl;
 			break;
	 
 		case 3:
 			cout<<"Multi is :"<<num1*num2<<endl;
 			break;
	
 		case 4:
 			if (num1==0) {
 				cout<<"Enter Valid Value for num1 :";
 				break;
			 }
 			cout<<"Divi is :"<<num1/num2<<endl;
 			break;
	 }
 }

	};
	int main(){
		cal calcuter;
		return 0;
	}

	
	
