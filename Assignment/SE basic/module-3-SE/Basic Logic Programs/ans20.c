//20. Accept monthly salary from the user and deduct 10% insurance premium,
//  10% loan installment find out of remaining salary//
#include<stdio.h>
int main (){
	
	int income;
	printf("Enter monthly salary :",income);
	scanf("%d",&income);
	
	float insurance ,total;
	insurance = income-(income * 0.1 );
	printf(" Paying insurance than remaining balance is :%.2f\n",insurance);
	
	total =insurance-(insurance * 0.1);
	printf("Paying this installments available salary is :%.2f",total);
	return 0;
}
