/* 4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement */
#include<stdio.h>
int main (){
	int no1,no2;
	char choice;
	
	printf("enter    + for addition \n \t - for subtraction \n\t * for miltipliction \n\t / for division  \n\t %% for modoulo");
	
	printf(" \n================================");
	printf("\nEnter no 1 value :",no1);
	scanf("%d", &no1);
	
	printf("enter your choice :",choice);
	scanf(" %c", &choice);
	
	printf("\nEnter no 2 value :",no2);
	scanf("%d" ,&no2);
	
	printf("\n================================\n");
	switch(choice)
	{
		case '+':
			printf("addititon of %d and %d is = %d,",no1,no2,no1+no2);
			break;
		
		case '-' :
			printf("subtraction of %d and %d is = %d,",no1,no2,no1-no2);
			break;
		
		case '*' :
			printf("multipliction of %d and %d is = %d,",no1,no2,no1*no2);
			break;
		
		case '/' :
			if(no2 == 0){
				printf("You Can't' Divided by Zero");
			} 
			else {
				printf("division of %d and %d is = %d,",no1,no2, no1 / no2);
			}
			break;
		
		case '%' :
			printf("addititon of %d and %d is %d,",no1,no2,no1%no2);
			break;
			default :
				printf("\nYou enter invaild operator");
		}
	return 0;
}
