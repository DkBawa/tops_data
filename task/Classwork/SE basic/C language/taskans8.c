//take three subject mark from the student and find percent and chack student is pass or fail//
#include<stdio.h>
int main (){
	float mark1,mark2,mark3;
	printf("Enter mark for sub1 : sub2: sub3:",mark1 ,mark2, mark3);
	scanf("%f %f %f", &mark1 , &mark2, &mark3);
	
	printf("sub1  :%.2f\n",mark1);
	printf("sub2  :%.2f\n",mark2);
	printf("sub3  :%.2f\n",mark3);
	
    float total = mark1 + mark2 + mark3 ;
   
    float per = total * 100 / 300 ;
    printf("pre is %.2f",per);
    
    if (per >= 33 ){
    	printf("You Pass The Exam\n",per);
	} else {
		printf("\nTry Again",per);
	}
    
	 return 0;
} 
