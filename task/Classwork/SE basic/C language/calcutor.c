//calculator // 
#include<stdio.h>
int main (){ 
    char choice;
	int no1,no2,add,divi,multi,subtract;
	printf("Please Enter your calcution choice :",choice);
	scanf("%c", &choice);
	
	if (choice == '+' || choice == '-'|| choice == '*' || choice == '/' ) {
		
	printf("\nEnter No1 Value :",no1);
	scanf("%d", &no1);
	printf("\nEnter No2 Value :",no2);
	scanf("%d", &no2);
	} else {
		printf("You enter Wrong choice ");
	}
     if (choice == '+' ) {
	       add = no1+no2;
		printf("Enter Value Addition is :%d",add);
	} else if (choice == '-' ) {
	          subtract = no1-no2;
	       printf("Enter Value subtract is :%d",subtract);
	   } else if (choice == '*' ) {
	   	   multi = no1*no2;
	       printf("Enter Value multiplication is :%d",multi);
	   }  else if (choice == '/' ) {
	   	   divi = no1/no2;
	       printf("Enter Value division is :%d",divi);
	   } else {
	   	printf("\nplease enter right choice ");
	   }
	   
	return 0;
}
