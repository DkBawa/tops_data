//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable//
#include<stdio.h>
int main (){
	int num1,num2;
	printf("Enter value num1 Is :",num1);
	scanf("%d",&num1);
	
	printf("Enter value num2 Is :",num2);
	scanf("%d",&num2);
	
	int temp = num1;
	    num1 = num2;
	    num2 = temp;
	printf("After swap value is change num1=%d,\n num2=%d :\n",num1,num2);
	
	//	without using variable Swap//
	
	int value1,value2;
	printf("Enter value1 Is :",value1);
	scanf("%d",&value1);
	
	printf("Enter value2 Is :",value2);
	scanf("%d",&value2);
	
	value1 = value1 ^ value2;
	value2 = value1 ^ value2;
	value1 = value1 ^ value2;
	printf("After swapping value1 Is :%d\n",value1);
	printf("After swapping value2 Is :%d\n",value2);
	return 0;
	

}
