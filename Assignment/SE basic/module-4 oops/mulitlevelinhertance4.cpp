//4. Write a C++ Program display Student Mark sheet using Multiple inheritance 
#include<iostream>
#include<string>
using namespace std;
class student {
	public: 
	string name;
	int clas;
};

class exam : public student {
	public: 
	string subject;
	int rollno;
};

class result : public exam{
	public:
		int mark;
		int final_result;
		void res() {
			cout<<"Enter Name :"<<endl;
			cin>>name;
		 cout<<"Class No :"<<endl;
		 cin>>clas;
		 cout<<"enter subject :"<<endl;
		 cin>>subject;
		 cout<<"roll no :"<<endl;
		 cin>>rollno;
		 
		 cout<<"Enter Mark :"<<endl;
		 cin>>mark;
		 
		 if (mark >=0 && mark <=35 ) {
		 	cout<<"grade D"<<endl;
		 	} else if (mark >=36 && mark <=60) {
		 		cout<<"grade C"<<endl;
			 } else if (mark >=61 && mark <=75) {
		 		cout<<"grade B"<<endl;
		}  else {
			cout<<"grade A"<<endl;
		}
}
};

int main () {
	result obj;
	obj.res();
}
