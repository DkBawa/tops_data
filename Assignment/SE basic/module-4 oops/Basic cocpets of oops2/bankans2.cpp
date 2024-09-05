// represent a bank account include data member
#include<iostream> 
using namespace std;

class bank{
	public:
	string name,acType;
	int acNum;
	int choice;
	float bal=100000;

	
	
	Basicdetail() {
	cout<<"Name of ac holder"<<endl;
	cin>>name;
	cout<<"Account Type A-Current B-Saving "<<endl;
	cin>>acType;
	cout<<"Account Number"<<endl;
	cin>>acNum;
	cout<<"Enter Choice 1 for deposit 2 for withdraw"<<endl;
	cin>>choice;
	
	
	} 
};
	
class Deposit : Bank{
	public:
	int diposit;
	dipo() {
	cout<<"Enter Amount For Deposit"<<endl;
	cin>>diposit;
	}
	
	
	
}


main () {
	bank obj;
	obj.Basicdetail();
}
