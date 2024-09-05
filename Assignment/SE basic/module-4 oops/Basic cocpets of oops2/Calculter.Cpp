// Calcuter //
#include<iostream>
using namespace std;
class calculator {
    int num1,num2;
	int choice; 
	int result;
	public:
	calculator () {
		cout<<"1 for + Addition, 2 for / Division  3 for * Multiplication 4 for - subtract ";
	cout<<"\n enter your choice :";
	cin>>choice;
	cout<<"\n Enter Num 1 Value :";
	cin>>num1;
	cout<< "\n Enter Num 2 Value :";
	cin>>num2;  
	switch(choice)
	{
		case 1:
			cout<<"Addition :";
			result = num1 + num2;
			cout<<result;
			break;
		case 2:
			cout<<"Division :";
			result = num1 / num2;
			cout<<result;
			break;
	
		case 3:
			cout<<"Multiplication :";
			result = num1 * num2;
			cout<<result;
			break;	
		case 4:
			cout<<"subtract";
			result = num1 - num2;
			cout<<result;
			break;
		default:
			cout<<"invalid choice";	
	}
		  
} 
}



