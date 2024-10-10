/*1. Write a programto find the multiplication values and the cubic values using
inline function
*/ 
#include<iostream>
#include<string>
using namespace std;
inline int multi(int x) {
		return x*x;
	} 
	inline int cube(int x){
		return x*x*x;
	}

int main () {
	int x;

	cout<<"Enter a Number : "<<endl;
	cin>>x;
	
	cout <<"multi of x is :"<<multi(x)<<endl;
	cout <<"cubec of x is :"<<cube(x)<<endl;
	return 0;
}
	

