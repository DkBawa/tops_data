/* 36. Write a C program to input electricity unit charges and calculate total 
electricity bill according to the given condition: 
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill  */
#include<stdio.h>
int main (){
    int unit ,surcharge;
	float Total_bill ,bill;
	
    printf("Enter Consumed unit :" , unit);
	scanf("%d", &unit);
	
	if (unit <= 50) {
		bill = (unit * 0.50); 
		printf("coustmer Light Bill Is :%.2f",bill);
	} else if (unit >= 150 ){
		bill = (unit * 0.75);
		printf("coustmer Light Bill Is :%.2f",bill);
	} else if (151 < unit > 250){
		bill = (unit * 1.20);
		printf("coustmer Light Bill Is :%.2f",bill);
	} else {
		bill = (unit * 1.50 );
		printf("coustmer Light Bill Is :%.2f",bill);
	} if (bill >= 201) {
	
		surcharge = bill * 0.20;
		Total_bill = surcharge + bill ;
		printf("\nTotal Bill Is :%d",Total_bill);
	} 
	return 0;
} 
