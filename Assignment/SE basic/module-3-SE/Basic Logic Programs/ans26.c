//26.Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main (){
	int farn ;
	printf("Plese enter Fahrenheit  temperature : ",farn);
	scanf("%d", &farn);
	
	float cel = (farn-32) * 5 / 9 ;
	printf(" Fahrenheit convert to celsius :%.2f",cel);
	
	return 0;
}
