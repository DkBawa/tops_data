/* 5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.  */
#include<iostream>
#include<string>

using namespace std;
  class Rectangle {
  	private:
  	 int length,width;
  	 
  	public: 
  	 rect() { 
  	 int l;
  	 cout<<"Enter Length of Rectangle :"<<endl;
  	 cin>>l;
  	 	length = l;
	   } 
	   
	   ret() {
	   	int w;
	   	cout<<"Enter width of Rectangle"<<endl;
  	    cin>>w;
	   	width = w;
	   }
  	 // creating function //
  	  area () {
  	 	float Area;
  	 	Area = length * width;
  	 	cout<<"Area of Retangle is :"<<Area<<endl;
	   } 
	   
	    perimeter () {
	    float  Perimeter;
	   Perimeter = 2 * (length + width);
	   	cout<<"perimeter of Retangle is :"<<Perimeter<<endl;
	   }
  	
  };


int main () {
	 Rectangle obj ;
	 obj.rect();
	 obj.ret();
	 obj.area();
	 obj.perimeter();
	 
	return 0;
}

