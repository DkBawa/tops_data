//polimorphisam    
// compile time  - function overloading
#include<iostream>
#include<string>
using namespace std;

class show {
	public :
	void print(	string name){
			cout<<"enter name :"<<name<<endl;
		
		}
		
		void print(int num){
			cout<<"enter delete number :"<<num<<endl;
		
		}
};
int main (){
	show p;
	p.print("dinesh");
	return 0;
}

