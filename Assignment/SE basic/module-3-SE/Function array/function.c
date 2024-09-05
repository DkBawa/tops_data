#include<stdio.h>
fac () // function defination 
{
	int i ,n ,fac=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		fac = n*i;
	} printf("factorial : %d\n",fac);
}

add () {
	int a,b;
	printf("enter A :\n");
	scanf("%d",&a);
	printf("enter B :\n");
	scanf("%d",&b);
	printf("Addition is : %d\n",a+b);
	
	
} sub () {
		int n1,n2;
	printf("enter n1 :\n");
	scanf("%d",&n1);
	printf("enter B :\n");
	scanf("%d",&n2);
	printf("Subtraction  is : %d",n1-n2);
} mul () {
		int n1,n2;
	printf("enter n1 :\n");
	scanf("%d",&n1);
	printf("enter B :\n");
	scanf("%d",&n2);
	printf("Multiplction is : %d\n",n1*n2);
} divi
	 () {
		int n1,n2;
	printf("enter n1 :\n");
	scanf("%d",&n1);
	printf("enter B :\n");
	scanf("%d",&n2);
	printf("Division is : %d",n1/n2);
}  
main () 
{
	fac () ; // function calling
add () ;
add () ;
mul () ;
	divi () ;
}
