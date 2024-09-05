// 3. WAP to check if the given year is a leap year or not. //
#include<stdio.h>
int main (){
	int year ;
	printf("Enter Year :",year);
	scanf("%d",&year);
	if (year % 4 == 0){
		printf("this is a leap year");
		} else {
			printf("this not a leap year");
		}
	return 0;
}
