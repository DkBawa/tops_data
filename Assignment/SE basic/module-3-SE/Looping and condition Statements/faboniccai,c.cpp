// WAP to print Fibonacci series up to given numbers 
#include<stdio.h>
main () {
	int i=2,n1=0,n2=1,n3,n;
	
	printf("Enter any value for fibonacci :\n");
	scanf("%d",&n);
	printf("\n%d",n1);
	printf("\n%d",n2);
   while (i < n) {
		n3 = n1 + n2; 
		n1 = n2;       
		n2 = n3;        
		i++;		
		printf("\n%d",n3);
	}
}
0
1

