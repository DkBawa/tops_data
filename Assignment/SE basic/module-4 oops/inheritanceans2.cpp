// 2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
#include<string>
using namespace std;
class Area {
	public:
		int length,width;
};

class rect : public Area{
	public :
		int area;
		void fun(){
			cout<<"Enter length of rectangle :"<<endl;
			cin>>length;
			cout<<"Enter width of rectangle :"<<endl;
			cin>>width;
			cout<<"Area of rectangle :"<< length * width <<endl;
			cin>>area;
		}
};
int main (){
	rect obj;
	obj.fun();
} 

