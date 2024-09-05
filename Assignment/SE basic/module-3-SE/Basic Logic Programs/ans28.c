//28.Convert years into days and months//
#include<stdio.h>
int main (){
	int years ,months ,days;
	printf("Please enter years :",years);
	scanf("%d", &years);
	
	months = years * 12 ;
	printf("Converted years in month is : %d\n",months);
	 
	days = months * 30 ;
	 printf("Years in days is :%d", days);
	
	
	return 0;
}
