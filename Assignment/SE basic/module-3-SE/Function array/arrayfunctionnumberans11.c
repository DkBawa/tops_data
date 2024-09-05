// 11. WAP to accept 5 numbers from user and display in reverse order using for loop and array //
#include<stdio.h>
int main () {
  	int i, num[5];
  	for (i=0;i<=4;i++)
	  {
	  printf("\nEnter numbers :",num[i]);
	  scanf("%d",&num[i]);
	 } for (i=4; i>=0;i--) 
	 {
	 	printf("%d ", num[i]);
	 }
return 0;
	 
}

