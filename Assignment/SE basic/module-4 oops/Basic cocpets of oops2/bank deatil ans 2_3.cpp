
/* 2. Define a class to represent a bank account. Include the following members: 
3. Data Member: -Name of the depositor -Account Number -Type of Account -Balance amount in the account 
*/ 
#include<iostream> 
using namespace std;
 
class bank {
 		string name;
 	double ac_number;
 	string type_ac;
 	float deposit;
	float balance =100000;
	public:
	int choice;
 public:
 void get () 
 {

 	cout<<"Enter the depositer name"<<endl;
 	cin>>name;
 		cout<<"Enter the Type of Accounts :"<<endl;
 	cin>>type_ac;
 		cout<<"Enter the Account number"<<endl;
 	cin>>ac_number;

 	cout<<"Enter 1 for deposite and 2 for withdraw";
 	cin>>choice;
 }

void deposite() 
{
	float dep_amt;
	cout<<"Enter your deposit amount :";
	cin>>dep_amt;
	
balance=balance+dep_amt;
	
}

void withdraw(){
	float withdraw_amt;
	cout<<"Enter your withdraw amount :";
	cin>>withdraw_amt;
	if (withdraw_amt > balance ) {
		cout<<"Can't Withdraw";
	}else
	{
	    balance=balance-withdraw_amt;
	}
	
}
 void display (){
	
	cout<<"\n Your name is : "<<name;
	cout<<"\n Total balance is "<<balance;
}

};
int main(){
 bank obj;
	obj.get();
	
	switch(obj.choice)
	{
		case 1:
			obj.deposite();
			break;
		case 2:
		    obj.withdraw();
		    break;
		default:
			cout<<"invalid choice";
			break;
	}
	obj.display();
}
