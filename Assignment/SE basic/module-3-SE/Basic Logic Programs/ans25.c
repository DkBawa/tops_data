//25.Accept 5 expense from user and find average of expense//
#include<stdio.h>
int main (){
	float exp1 ,exp2 ,exp3 ,exp4 ,exp5;
	printf("expense for bike :",exp1);
	scanf("%f", &exp1);
	
	printf("\nexpense for rent :",exp2);
	scanf("%f", &exp2);
	
	printf("\nexpense for fee :",exp3);
	scanf("%f", &exp3);
	
	printf("\nexpense for enjoy :",exp4);
	scanf("%f", &exp4);
	
	printf("\nexpense for recharge :",exp5);
	scanf("%f", &exp5);
	
	float total = (exp1 + exp2 + exp3 + exp4 + exp5) ;
	printf("\n total expense is :%.2f", total);
	
	float aveg = total/5 ;
	printf("\n average of expense is:%.2f", aveg);
	
	return 0;
}
