// Calculate person’s insurance premium based on salary//
#include<stdio.h>
int main(){
    char name[50];
	printf("Enter coustmer name :");
	scanf("%s", name);
    
	int salary;
    printf("enter salary :",salary);
	scanf("%d", &salary);
	
	float premium;
	premium = 0.12 * salary;
	printf("\n %s your insurance premium based on salary your salary is :%.2f", name,premium );
	
	return 0;
}

