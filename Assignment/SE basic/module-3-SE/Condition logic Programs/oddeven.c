/* . WAP to take 10 no. Input from user find out below values 
a. How many Even numbers are there 
b. How many odd numbers are there 
c. Sum of even numbers 
d. Sum of odd numbers 
*/
#include<stdio.h>
main () {
	int i,n,eve=0,evesum=0,odd=0,oddsum=0;
	
	for (i=1; i<=10;i++) {
	printf("\nenter num :");
	scanf("%d",&n);
	if (n%2==0) {
		printf("\nthis is even num :%d",n);
		eve++;
		evesum = evesum + n;
		
	} else {
			printf("\nthis is odd num :%d",n);
		odd++;
		oddsum = oddsum + n;
	} 
	
	}  printf("Total even num is : %d\n",eve);
	   printf("Total sum of even num is : %d\n",evesum);
	    printf("Total odd num is : %d\n",odd);
	   printf("Total sum of odd num is : %d\n",oddsum);
	
}
