  //16 Convert country name in abbreviated form//
#include<stdio.h>
    int main (){
	
	char country[15], country_code;
	printf("Enter the name of country :",country);
	
	scanf("%s",&country);
	printf("abbrevited country name is %s =.2c%", country);
    
	return 0;
}
