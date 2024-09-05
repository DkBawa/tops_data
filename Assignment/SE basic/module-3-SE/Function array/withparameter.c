#include<stdio.h>
fac () // function defination 
{
	int i ,n ,fac=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		fac = n*i;
	} printf("factorial : %d",fac);
}

add () {
	int a,b;
	printf("enter A :");
	scanf("%d",&a);
	printf("enter B :");
	scanf("%d",&b);
	printf("Addition is : %d",a+b);
	
	
} sub () {
		int n1,n2;
	printf("enter n1 :");
	scanf("%d",&n1);
	printf("enter B :");
	scanf("%d",&n2);
	printf("Subtraction  is : %d",n1-n2);
} mul () {
		int n1,n2;
	printf("enter n1 :");
	scanf("%d",&n1);
	printf("enter B :");
	scanf("%d",&n2);
	printf("Multiplction is : %d",n1*n2);
} divi
	 () {
		int n1,n2;
	printf("enter n1 :");
	scanf("%d",&n1);
	printf("enter B :");
	scanf("%d",&n2);
	printf("Division is : %d",n1/n2);
}  
main () 
{
int choice;
printf("Press 1 for Factorial");
printf("Press 2 for addition ");
printf("Press 3 for Substraction");
printf("Press 4 for Multiplication");
printf("Press 5 for Exit");
while(1)
}  printf("\nEnter Choice : ");
scanf("%d",&choice);

if (choice==1) {
         fac();
} else if  (choice==2) 
{
	add () ;
} else if  (choice==3) {
	sub ();
} else if  (choice==4) {
	mul (); 
} else if  (choice==5) {
	divi();
} else {
	printf("Invaild Choice !!");
	break;
}







