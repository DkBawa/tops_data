/* 2. Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) */

#include<stdio.h>
int main (){
	//addition//
	int num1,num2;
	printf("Enter Value For addition:");
	printf("\nEnter a number:",num1);
	scanf("%d",&num1);
	printf("%d\n",num1);
	printf("\nEnter a number:",num2);
	scanf("%d",&num2);
	printf("%d\n",num2);
	
	int total = num1+num2;
	printf("Total =%d\n",total,num1,num2);
	
	//subtraction//
	int n1,n2;
	printf("\nEnter Value For subtraction:");
	printf("\nEnter a number:",n1);
	scanf("%d",&n1);
	printf("%d\n",n1);
	printf("\nEnter a number:",n2);
	scanf("%d",&n2);
	printf("%d\n",n2);
	
	int result = n1-n2;
	printf("\nresult =%d\n",result,n1,n2);
	
	//multiplication//
	int number1,number2;
	printf("\nEnter Value For multiplication:");
	printf("\nEnter a number:",number1);
	scanf("%d",&number1);
	printf("%d\n",number1);
	printf("\nEnter a number:",number2);
	scanf("%d",&number2);
	printf("%d\n",number2);
	
	int multiplication = number1*number2;
	printf("\nmultiplication =%d\n",multiplication,number1,number2);
	
	
	//division//
	int value1,value2;
	printf("\nEnter Value For division:");
	printf("\nEnter a number:",value1);
	scanf("%d",&value1);
	printf("%d\n",value1);
	printf("\nEnter a number:",value2);
	scanf("%d",&value2);
	printf("%d\n",value2);
	int Total_value = value1 / value2;
	printf("\nTotal_value =%d\n",Total_value,value1,value2);
	
	//modulo//
	int A,B;
	printf("\nEnter Value For modulo:");
	printf("\nEnter a number:",A);
	scanf("%d",&A);
	printf("%d\n",A);
	printf("\nEnter a number:",B);
	scanf("%d",&B);
	printf("%d\n",B);
	
	int finalValue = A % B;
	printf("finalValue =%d\n",finalValue,A,B);
	
	return 0;
}

