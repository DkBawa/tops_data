/*36. Write a C program to input electricity unit charges and calculate total 
electricity bill according to the given condition: 
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill 
*/
#include<stdio.h>
int main (){
	int unit ;
	float bill,sarcharge;
	printf("Enter Your electricity unit :");
	scanf("%d", &unit);

	if (unit <= 50 ) {
		bill = unit * 0.50;
		printf("your electricity bill is : %.2f",bill);
	} else if (unit <= 150) {
		bill = 50 * 0.50 + (unit - 50 )*0.75;
			printf("your electricity bill is : %.2f",bill);
	} else if (unit <= 250) {
		bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
		printf("your electricity bill is : %.2f",bill);
	} else {
		bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
	
	}
	sarcharge = 0.20 * bill ;
	bill += sarcharge;
		printf("your Total electricity bill is : %.2f",bill);
	return 0;
} 
