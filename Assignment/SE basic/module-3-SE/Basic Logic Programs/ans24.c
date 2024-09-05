//24.Accept 5 employees name and salary and count average and total salary//
#include<stdio.h>
int main (){
	char name[5][50];
    int salary1 , salary2 , salary3 , salary4 , salary5; 
	printf("Enter your  Name  :",name);
	scanf("%s", &name);
		
	printf("Enter Your salary  :",salary1);
	scanf("%d", &salary1);
	
	printf("Enter Your Name2  :",name);
	scanf("%s", &name);
	
	printf("Enter Your salary  :",salary2);
	scanf("%d", &salary2);
	
	printf("Enter Your Name  :",name);
	scanf("%s", &name);
	
	printf("Enter Your salary  :",salary3);
	scanf("%d", &salary3);
	
	printf("Enter Your Name4  :",name);
	scanf("%s", &name);
	
	printf("Enter Your salary  :",salary4);
	scanf("%d", &salary4);
	
	printf("Enter Your Name5  :",name);
	scanf("%s", &name);
	
	printf("Enter Your salary  :",salary5);
	scanf("%d", &salary5);
	
	int total = (salary1 + salary2 + salary3 + salary4 + salary5 );
	printf("total salary is : %d \n",total);
	
	float average_salary = total / 5 ;
	printf("Average salary is : %.2f",average_salary);
	return 0;
}
