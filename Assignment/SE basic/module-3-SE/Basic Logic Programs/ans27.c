//27.Convert days into months
#include<stdio.h>
int main (){
	int days ,month ,rem_day;
	printf("Plese enter days : ",days);
	scanf("%d", &days);
	
	month = days / 30 ;
	rem_day = days % 30;
	
	printf(" Days convert into month is :%d month and %d days",month,rem_day);
	
	return 0;
}
