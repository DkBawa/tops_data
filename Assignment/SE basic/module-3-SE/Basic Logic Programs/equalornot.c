//Write a C program to accept two integers and check whether they are equal 
#include<stdio.h>
main () {
	int n1,n2;
	printf("Enter Number1 :");
	scanf("%d",&n1);
	
	printf("\nEnter Number2 :");
	scanf("%d",&n2);
	if (n1==n2) {
		printf("they are equal ");
	} else {
		printf("they are not equal");
	}
}
