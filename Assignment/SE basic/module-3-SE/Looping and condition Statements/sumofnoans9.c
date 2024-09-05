// 9. Write a program make a summation of given number (E.g., 1523 Ans: -11)  //
#include<stdio.h>
int main (){
	int n,sum=0,digit;
	printf("enter number :",n);
	scanf("%d",&n);
   while(n != 0)
   {
   	digit = n % 10;
    sum = sum + digit;
     n= n/10;
    } 	
    printf("sum is :%d",sum);
	
	return 0;
}
