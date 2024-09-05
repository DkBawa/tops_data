#include <stdio.h>
int main() {
    int year;
    printf("Enter Year : ");
    scanf("%d", &year);

    
    if(year % 4 == 0) {
    	  printf("%d this is leap year .",year);
    }
    else
        {
        	printf("%d this is no leap year.", year);
		}
	return 0;
}
