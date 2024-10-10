/*
4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/
#include<iostream>
#include<string> 
using namespace std;

class circle {
	public :
	int radius;
	
     A(){
     		cout<<"Enter Circle Radius"<<endl;
	        cin>>radius;
	 }
	 area () {
	 	
	 	float Area;
	 	Area = 3.14 * radius * radius;
	 	cout<<"circle Area is : "<<Area<<endl;
	 
	 }
	 circumference () {
	 
	 	float cir; 
	    cir= 2 * 3.14 * radius;
	 	cout<<"circle circumference is : "<<cir<<endl;
	 	
	 }
	 
};
main () {
	circle obj;
	obj.A();
	obj.area();
	obj.circumference();
	
	return 0;
	
}
