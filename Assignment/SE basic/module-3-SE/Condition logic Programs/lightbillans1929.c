/* 19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow : 
20. Unit 21. Charge/unit 
22. upto 350 23. @1.20 
24. 350 and above but less than 600 25. @1.50 
26. 600 and above but less than 800 27. @1.80 
28. 800 and above 29. @2.00*/
#include<stdio.h>
int main (){
char name[50];
	int ID,unit ,surcharge,Total_bill;
	float bill;
	printf("Enter Coustmer name :",name);
	scanf("%s", name);
	
    printf("Enter Id :" ,ID);
	scanf("%d", &ID);
	
    printf("Enter Consumed unit :" , unit);
	scanf("%d", &unit);
	
	if (unit <= 350) {
		bill = (unit * 1.20); 
		printf("coustmer Light Bill Is %.2f",bill);
	} else if (unit <= 600 ){
		bill = (unit * 1.50);
		printf("coustmer Light Bill Is %.2f",bill);
	} else if (unit <= 800 ){
		bill = (unit * 1.80);
		printf("coustmer Light Bill Is %.2f",bill);
	} else {
		bill = (unit * 2 );
		printf("coustmer Light Bill Is %.2f",bill);
	} if (bill >= 800) {
		surcharge = bill * 0.18;
		Total_bill = surcharge + bill ;
		printf("\nTotal Bill Is :%d",Total_bill);
	} else if (bill <= 255) {
		printf("\n Minimum bill is : 256");
	}
	return 0;
} 



