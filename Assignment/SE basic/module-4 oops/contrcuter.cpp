// contrcuter //
#include<iostream>
#include<string>
using namespace std;

class Contructer{
	public:
	string name; 
	
	Constructer () {
		cout<<"Enter Your Name 1"<<endl;
		cin>>name;
	}
};

class Con : public Contructer{
	public :
		int age;
		Con (){
			cout<<"Enter Age :"<<endl;
			cin>>age;
		}
};

int main () {
	Con obj;
	obj.Constructer();
	return 0;
}
