/*14. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation*/
#include<iostream>
#include<string>
using namespace std;

class student{
	private: 
	string name;
	int clas;
	int rollNumber;
	int marks;
	
	public:
		void detail(){
			cout<<"Enter Student Name :"<<endl;
			cin>>name;
			cout<<"Class :"<<endl;
			cin>>clas;
			cout<<"Enter Roll No :"<<endl;
			cin>>rollNumber;
		} 
		void mark(){
			cout<<"Enter Marks :"<<endl;
			cin>>marks;
			if (marks <=100 && marks >=75 ) {
				cout<<"Your grade is :'A' "<<endl;
			} else if  (marks <=74 && marks >=50 ) {
				cout<<"Your grade is :'B' "<<endl;
		} else if  (marks <=49 && marks >=25 ) {
				cout<<"Your grade is :'C' "<<endl;
       } else {
       	cout<<"Your Grade id : 'D' "<<endl;
	   }
	   
}
void add(){
	string Add;
	cout<<"Enter Student Address :"<<endl;
	cin>>Add;
	
}
};

int main (){
	student obj;
	obj.detail();
	obj.mark();
	obj.add();

}
