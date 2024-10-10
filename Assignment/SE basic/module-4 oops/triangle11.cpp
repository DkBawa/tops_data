/* 5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene
*/
#include<iostream>
#include<string>
using namespace std ;

class Triangle{ 
private:
	int a,b,c;
	public:
		void setlength() {
			cout<<"Enter length of traiangle sides :"<<endl;
			cin>> a >> b >> c;
		} 
	
	void triangleType() {
			if (a==b && b==c ) {
				cout<<"This is a equilateral triangle"<<endl;
			} else if (a==b ||b==c ||c==a) {
				cout<<"this is a isosceles"<<endl;
			} else {
				cout<<"this is scalene"<<endl;
			}
		} 
};

int main (){
	Triangle obj;
	obj.setlength();
	obj.triangleType();
}
