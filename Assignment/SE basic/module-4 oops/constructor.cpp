//7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritane/
#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		 // Constructor for student class
		student(){
			cout<<"enter Name :"<<endl;
			cin>>name;
		}
}; class subject : public student{ 
			public:
			string sub;
			 // Constructor for subject class
			subject(){
				cout<<"enter subject name :"<<endl;
				cin>>sub;
				
			}
			 
}; class display : public subject {
      public:
      	// fun for display infromatoion 
      	void show(){
      		cout<<"Name :"<<name<<endl;
      		cout<<"Subject :"<<sub<<endl;
		  }
	  };
int main (){
	display obj; // Call constructor of student and subject classes
    obj.show();   // Call the show function to display information

}
