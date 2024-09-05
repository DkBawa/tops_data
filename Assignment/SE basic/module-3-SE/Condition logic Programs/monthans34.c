// 34. Accept month number and display month name //
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
		break;
		
		case 2:
			printf("Februry");
			break;
			
			case 3:
			printf("March");
			break;
			
			case 4:
			printf("April");
			break;
			
			case 5:
			printf("May");
			break;
	
		    case 6:
			printf("june");
			break;
			
				case 7:
			printf("July");
			break;
	
	         	case 8:
			printf("August");
			break;
			
				case 9:
			printf("September");
			break;
			
				case 10:
		    printf("Octmber");
			break;
	
			case 11:
				printf("November");
						break;
			
			case 12:
			printf("December");
			break;
	}
  return 0;
} 
