#include<stdio.h>
main (){
	int n,sum=0,rem,rev=0,rem1,rev1;
	printf("Enter Your Value :");
	scanf("%d",&n);
		rem = n%10;
while (n!=0){
	rem1 = n%10;
     rev = rev * 10 + rem1;
	 n = n/10;
   }
    rev1 = rev%10;
	sum = rem + rev1;
	printf("Sum of first and last digit is : %d",sum);
	
		
	
	
	
	
}
