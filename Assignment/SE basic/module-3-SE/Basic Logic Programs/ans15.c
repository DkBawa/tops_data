//15 Convert school’s name in abbreviated form//
#include<stdio.h>
    int main (){
	
	char firstname[15] , middlename[15], lastname[15];
	printf("Enter first name of school :",firstname);
	scanf("%s",&firstname);
	
	printf("Enter middle name of school :",middlename);
	scanf("%s",&middlename);
	
	printf("Enter last name of school :",lastname);
	scanf("%s",&lastname);


    printf("FUll name of school is : %s %s %s \n",firstname,middlename,lastname);
    
    printf("abbrevited name of school is : %c%c ,%s", firstname[0],middlename[0],lastname);
    
	return 0;
}
