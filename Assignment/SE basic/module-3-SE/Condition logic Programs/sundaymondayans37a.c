/* 37. WAP to show 
i. Monday to Sunday using switch case 
ii. Vowel or Consonant using switch case */ 

#include<stdio.h>
int main (){
	int number = 7;
	printf("Enter Number of week :",number);
	scanf("%d", &number);

	switch (number) {
		case 1:
			printf("Monday");
			break;
			
			case 2:
			printf("Tueday");
			break;
			
			case 3:
			printf("Wedanday");
			break;
			
			case 4:
			printf("Thursday");
			break;
			
			case 5:
			printf("Friday");
			break;
			
			case 6:
			printf("Saturday");
			break;
			
			case 7:
			printf("Sunday");
			break;
			
			default:
				printf("You enter wrong week no");
			} 
				return 0;
} 

