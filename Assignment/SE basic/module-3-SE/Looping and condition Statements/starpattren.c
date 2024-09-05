/*    *
	 * *	
	* * *
   * * * * 
  * * * * *  */ 
#include<stdio.h>
main () {
	int i=1,j,k=1,n;
	
	printf("Enter value for * pattren :");
	scanf("%d",&n);
 for (i=1;i<=n;i++) //row //
                  {
 				for (j=i;j<=n;j++) {
 					printf(" ");
				 } for (k=1;k<=i;k++) {
				 	printf("*");
				 }printf("\n");
 } 
	}
