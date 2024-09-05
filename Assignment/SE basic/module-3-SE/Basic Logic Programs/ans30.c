//30.WAP to convert years into days and days into years
#include<stdio.h>
int main (){
	int year ,days;
	printf("Please enter years :",year);
	scanf("%d", &year);
	
	days = year * 360 ;
	printf("\nConverted year in days is : %d\n",days);
	 
	int day, years;
	printf("Please enter days :",day);
	scanf("%d", &day);
	
	years = day / 360 ;
	printf("\nConverted days into years : %d\n",years);
	
    return 0;
}
