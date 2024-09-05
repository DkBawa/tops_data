//  find largest amoung two number//
#include<stdio.h>
int main (){
	int num1, num2;
	printf("Enter Two Value of Number :",num1,num2);
    scanf("%d %d",&num1, &num2);
	printf("Value1 :%d\nValue2 :%d\n",num1,num2);
	
	if (num1 > num2){
		printf("Largest value of above Num: %d",num1);
	}
	else {
		printf("Largest value of above Num: %d",num2);
	}
	return 0;
}

