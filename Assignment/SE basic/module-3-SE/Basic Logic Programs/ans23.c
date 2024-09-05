//23.WAP calculate swap 2 numbers with using of multiplication and division//
#include<stdio.h>
int main (){
	int num1,num2;
	printf("Enter value num1 Is :",num1);
	scanf("%d",&num1);
	
	printf("Enter value num2 Is :",num2);
	scanf("%d",&num2);
	
	int temp = num1;
	num1=num2;
	num2=temp;
	printf("After swap value is num1=%d,\n num2=%d :\n",num1,num2);
	
	int multi = num1 * num2;
	printf("Swap number multiplication is :%d \n",multi);
	
    float div = num1 / num2;
	printf("Swap number Divison is :%.2f \n",div);
	return 0;
}
