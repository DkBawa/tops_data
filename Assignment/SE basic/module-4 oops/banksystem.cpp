/* 2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */

#include<iostream>
#include<string> 
using namespace std;

class bank { 
      public:
	  string dpName;
	  double Ac;
	  string AcType;
	  float balance;
	  int amount;
	  
	  
	  name(){
	  	cout<<"Enter Depositer Name"<<endl;
	  	cin>>dpName;
	  } 
	  
	 
	  Actype() {
	  	cout<<"Account Type !! Saving or Current :"<<endl;
	  	cin>>AcType;
	  	 }
	  ac () {
	  	cout<<"Enter Ac No :"<<endl;
	  	cin>>Ac;
	  }
	   dpAmount() {
	  	
	  	cout<<"Enter Deposit Amount :"<<endl;
	  	cin>>amount;
	  	cout<<"Your Amount Sucessfully Deposit "<<endl;
	  } 
	Balance(){
		
		cout<<"Balance is :"<<amount<<endl;
		cin>>balance;
	}
	  };
int main () {
	 bank obj;
	 obj.name();
	 obj.ac();
	  obj. Actype();
	 obj.dpAmount();
	 obj.Balance();
	
}
