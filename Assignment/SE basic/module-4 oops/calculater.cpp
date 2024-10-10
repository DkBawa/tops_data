/*8 Write a program of Addition, Subtraction, Division, Multiplication using
constructor*/
#include<iostream>
using namespace std;

class cal{ 
public:
int num1,num2,Add;

// creating constractor 
cal(){
	cout<<"Enter Number 1 :"<<endl;
	cin>>num1;
	cout <<"enter Number 2 :"<<endl;
	cin>>num2;
}
	// creating fun to display results
void add(){
cout<<"Addtion is :"<<num1 + num2<<endl;
	}
	// yaha ham alag alag fun banyaenge or alag alag task ke liye 
	void Sub (){

		cout<<"Subtraction is :"<<num1 - num2 <<endl;  // yaha hamne fun ke call ke sath hi output le liya he.
	}
	
	void divi(){
cout<<"Division is :"<<num1 / num2<<endl;
	}
	
	void multi(){
	cout<<"Multiplication is :"<<num1 * num2<<endl;
	}
};

int main (){
	cal obj;  //creating object
	obj.add();
	obj.Sub(); //call fin to display result
	obj.divi();
	obj.multi();
	
	return 0;
	}
