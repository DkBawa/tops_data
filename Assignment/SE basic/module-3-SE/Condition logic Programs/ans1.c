// 1. Write a C program to accept two integers and check whether they are equal or not //
#include<stdio.h>
int main (){
	int no1 , no2;
	printf("Enter Number 1 Value :",no1);
	scanf("%d",&no1);
	
	printf("Enter Number 2 Value :",no2);
	scanf("%d",&no2);
	
	if (no1 == no2)
	{
	printf("\nThese Integers Are Equal ");
		
	} else {
		printf("\n These Integers Are Not Equal");
	}
	
	return 0;
}

