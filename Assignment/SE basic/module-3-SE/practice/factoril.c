//  WAP to print factorial of given number 
#include<stdio.h>
main () {
	int i,n,fact=1;
	
	printf("Enter any value :");
	scanf("%d",&n);
	for ( i = 1 ; i <=n ; i++) {
fact = fact * i;
		}printf ("factorial is : %d",fact);
	
} 
