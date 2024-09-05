/* 8. WAP to accept the height of a person in centimeters and categorize the
person according to their height. */
#include<stdio.h>
int main (){
float height;
	printf("Enter a person Height in CM :",height);
	scanf("%f", &height);

	if (height < 150){
	   printf("Your height is normal :");
	} 
	else if (height >=150 && height < 160) {
	printf("You are a tell person");
	} 
	else if (height == 171 >= 180){
	printf("your are very tall");
	} 
    return 0;
}
