// prime numbers // it is only divisible by 1 and number it self
#include<stdio.h>
int main (){
	int i=1 ,num,temp;
	printf("Enter A value :",num);
	scanf("%d",&num);
	for(i=1; i<=num;i++)
	{
	temp = num%i;	
	}
	if (temp==2){
		printf("this is prime no:%d",temp);
	} else {
		printf("this is not a prime no %d:",temp);
	}
	return 0;
}
