/* 22. Accept 3 numbers from user using while loop and check each numbers 
palindrome */
#include<stdio.h>
int main (){
	int num,temp, rem,rev=0;
	printf("enter a number :",num);
	scanf("%d", &num) ;
	temp = num;
	while (temp > 0) {
		rem = temp%10;
		rev = rev * 10 + rem;
		temp = temp / 10;
		} 
		printf("reverse no is : %d\n",rev);
		if (rev == num) {
		printf("this is palidrome no :%d\n",num);
		} else {
			printf("this is not paliodrome no :%d",num);
		}
	
	
	
	return 0;
}
