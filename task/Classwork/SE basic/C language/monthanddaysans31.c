//  //
#include<stdio.h>
int main (){
	int month;
	printf("Enter Month Number :",month);
	scanf("%d", &month);
	
	switch (month) {
		case 1:
			printf("January :31 Days");
			break;
			case 2:
				printf("Faburary :28 Days");
				break;
				case 3:
					printf("March :31 Days");
					break;
					case 4:
						printf("April :30 Days");
						break;
						   case 5:
						      printf("May :31 Days ");
						      break;
						case 6:
						printf("June :30 Days");
						break;
						case 7:
						printf("July :31 Days");
						break;
						case 8:
						printf(" August :31 Days");
						break;
						case 9:
						printf("September :30 Days");
						break;
						case 10:
						printf("Octmber :31 Days");
						break;
						case 11:
						printf("Novmber :30 Days");
						break;
						case 12:
						       printf("Decmber :31 Days");
						       break;
	}
	
	return 0;
}

