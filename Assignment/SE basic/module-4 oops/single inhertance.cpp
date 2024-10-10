/*1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include<iostream>
#include<string>
using namespace std;
class cricket{
	public:
		string name;
		void Name(){
			cout<<"Enter Cricket Name :"<<endl;
			cin>>name;
		}
};
class batsman : public cricket {
	public :
		int run;
		int avgrun;
		cric(){
			cout<<"information"<<endl;
		}
		void getInfo(){
			cout<<"run :"<<endl;
			cin>>run;
			cout<<"avgrun"<<endl;
			cin>>avgrun;
			cout<<"name :"<<endl;
			cin>>name;
		}

};
int main(){
batsman obj;
	obj.Name();
	obj.getInfo();
}
