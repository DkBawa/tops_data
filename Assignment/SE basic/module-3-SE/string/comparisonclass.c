//comparison
#include<stdio.h>
main () // function defination 
{
	char a[5],b[5];
	printf("Enter string 1: ");
	gets(a);
		printf("Enter string 2: ");
	gets(b);
	
	int n = strcmp(a,b);
	printf("comparison is : %d",n);
}

