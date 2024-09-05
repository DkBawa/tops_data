// 35.Accept the input month number and print number of days in that month.//
#include<stdio.h>
int main () {

int num = 12;
printf("Enter Month number :",num);
scanf("%d", &num);
if (num > 12) {
	printf("Please Enter Right Value");
}
switch (num) {
	case 1:
		printf("januray");
		printf("\nDays : 31");
		break;
		
		case 2:
			printf("Februry");
				printf("\nDays : 28");
			break;
			
			case 3:
			printf("March");
				printf("\nDays : 31");
			break;
			
			case 4:
			printf("April");
				printf("\nDays : 30");
			break;
			
			case 5:
			printf("May");
				printf("\nDays : 31");
			break;
	
		    case 6:
			printf("june");
				printf("\nDays : 30");
			break;
			
				case 7:
			printf("July");
				printf("\nDays : 31");
			break;
	
	         	case 8:
			printf("August");
				printf("\nDays : 31");
			break;
			
				case 9:
			printf("September");
				printf("\nDays : 30");
			break;
			
				case 10:
		    printf("Octmber");
		    	printf("\nDays : 31");
			break;
	
			case 11:
				printf("November");
					printf("\nDays : 30");
						break;
			
			case 12:
			printf("December");
				printf("\nDays : 31");
			break;
	}
  return 0;
} 

