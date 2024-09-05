//find both numbers are same or not//
#include<stdio.h>
int main (){
	int num1, num2;
	printf("Enter Two Value of Number :",num1,num2);
    scanf("%d %d",&num1, &num2);
	printf("Value1 :%d\nValue2 :%d\n",num1,num2);
	
	if (num1 == num2){
		printf("both value are same");
	}
		else {
			printf("both value are not same");
		}
	return 0;	
	}

