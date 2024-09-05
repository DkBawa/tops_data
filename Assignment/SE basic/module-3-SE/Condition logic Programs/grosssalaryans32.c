/* 32. Write a C program to input basic salary of an employee and calculateits 
Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95% */
#include<stdio.h>
int main () {
float salary , hra ,da,total_salary;
	printf("Please Enter Your Basic Salary :",salary);
	scanf("%f", &salary);
	
	if (salary <= 10000) {
			hra = salary * 0.20 ;
			da = salary  * 0.80 ;
	        total_salary = salary + hra + da;
	        printf("Your Gross Salary Is : %.2f", total_salary);
	} else if (salary <=20000) {
	    			hra = salary * 0.25 ;
	    			da = salary  * 0.90 ;
	                total_salary = salary + hra + da;
	                printf("Your Gross Salary Is : %.2f", total_salary);
	} else {
			        hra = salary * 0.30 ;
	    			da = salary  * 0.95 ;
	                total_salary = salary + hra + da;
	                printf("Your Gross Salary Is : %.2f", total_salary);
	}
	return 0;
} 

