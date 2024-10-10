
/* 2. Define a class to represent a bank account. Include the following members: 
3. Data Member: -Name of the depositor -Account Number -Type of Account -Balance amount in the account 
*/ 
#include<iostream> 
using namespace std;
 class bank {
	public:
 		string name;
 		int acno,balance=5000;
 		int depo,wth,choice;
 		acopen(){ 
 			cout<<"Coustmer name :";
 			cin>>name;
 			
 			cout<<"1 For Deposit :"<<endl;
 			cout<<"2 for Withdrawal :"<<endl;
 			cout<<"3 for View Balance :"<<endl;
 			cout<<"4 for Exit"<<endl;
 			cout<<"enter your choice :"<<endl;
 			cin>>choice;
 			}
 switch(choice) {
 	case 1:
 		deposit() {
 	int depo;
 	 cout<<"Enter Amount for deposit :\n";
 	 cin>>depo;
 	 
 	 this->depo=depo;
 	 
 	 this->balance=this->balance+this->depo;
 	 
 	 cout<<"Now your balance is : \n"<<this->balance;
 	 break;
 	  }
 	  
 	  case 2:
 	  withdraw () {
 	  	int wth;
 	  	cout<<"Enter Amount For withdraw :\n";
 	  	cin>>wth;
 	  	
 	  	this->wth=wth;
 	  	
 	  	this->balance=this->balance-this->wth;
 	  	
 	  	cout<<"Now your balance is : \n"<<this->balance;
 	  	break;
	   } 
	   case 3:
	   ext() {
	
	   	cout<<"Thank you for visiting this page!!";
	   	break;
	   }
 }
};
	main () {
	bank obj;
	obj.acopen();
	obj.deposit();
	obj.withdraw();
	obj.ext();
}
