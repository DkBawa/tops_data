// 23. C Program to Reverse a Number Using FOR Loop //
#include<stdio.h>
int main () {
	int num ,rev=0,rem;
	printf("Enter a value :");
	scanf("%d", &num);
	while(num!=0) 
	{
		rem=num%10;
	    rev=rev * 10 + rem;
	    num=num/10;
	    }
	    printf("Reverse No is :%d",rev);
	return 0;
}
