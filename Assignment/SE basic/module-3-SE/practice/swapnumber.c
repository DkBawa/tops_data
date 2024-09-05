//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable 

#include<stdio.h>
main () {
	int n1,n2,temp;
	printf("Enter Number1 :");
	scanf("%d",&n1);
	
	printf("Enter Number2 :");
	scanf("%d",&n2);
	
	temp = n1;
	n1 = n2;
	n2 = temp;
	printf("number 1 :%d\n",n1);
	printf("number 2  :%d",n2);
}
