// 16. Calculate the Sum of Natural Numbers Using the While Loop //
#include<stdio.h>
int main (){
	int i=0,num,sum=0;
	printf("Enter a number :",num);
    scanf("%d",&num);

    while (i <= num){
    	sum += i;
          i++;
       	}	printf("sum of total no is :%d",sum);
	return 0;
} 
