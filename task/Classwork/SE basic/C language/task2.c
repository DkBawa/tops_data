//find smallest amoung two number//
#include<stdio.h>
int main (){
	int num1, num2;
	printf("Enter Two Value of Number :",num1,num2);
    scanf("%d %d",&num1, &num2);
	printf("Value1 :%d\nValue2 :%d\n",num1,num2);
	
	if (num1 > num2){
		printf("smallest value of above Num: %d",num2);
	}
	else {
		printf("smallest value of above Num: %d",num1);
	}
	return 0;
}
 
