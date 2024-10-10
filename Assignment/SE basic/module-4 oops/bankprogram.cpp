
/* 2. Define a class to represent a bank account. Include the following members: 
3. Data Member: -Name of the depositor -Account Number -Type of Account -Balance amount in the account 
*/ 
#include<iostream> 
using namespace std;
 
class bank {
	public:
 		string name;
 		int acno,balance=5000;
 		int depo,wth;
 		acopen() {
 			cout<<"name :";
 			cin>>name;
 			cout<<"Ac no :";
 			cin>>acno;
 			
 			
 			cout<<"Deposit is :"<<endl<<balance;
 			
 			this->balance = balance;
 			
		 }
 deposit() {
 	int depo;
 	 cout<<"Enter Amount for deposit";
 	 cin>>depo;
 	 
 	 this->depo=depo;
 	 
 	 this->balance=this->balance+this->depo;
 	 
 	 cout<<"Now your balance is : "<<this->balance;
 	 
 	  }
 	  
 	  
 	  withdraw () {
 	  	int wth;
 	  	cout<<"Enter Amount For withdraw";
 	  	cin>>wth;
 	  	
 	  	this->wth=wth;
 	  	
 	  	this->balance=this->balance-this->wth;
 	  	
 	  	cout<<"Now your balance is : "<<this->balance;
 	  	
	   } 
};
	main () {
	bank obj;
	obj.acopen();
	obj.deposit();
	obj.withdraw();
}
