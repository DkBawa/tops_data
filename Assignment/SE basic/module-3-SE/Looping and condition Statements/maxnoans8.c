// 8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) //
#include<stdio.h>
int main (){
	int n ,max;
	printf("Enter a Value :",n);
	scanf("%d",&n);
	
	while(n-10 >= 0)
	{
      n= n-10;
     }  printf("max no is :%d",n);	
	return 0;
}
