// 13.calculate the Factorial of a Given Number using while loop  //
#include<stdio.h>
int main (){
	
	int i=1 ,num, fact=1;
    printf("Enter a num :",num);
	scanf("%d",&num);
		
		while( i <= num){
			fact *= i;
			i++;
		}
		printf("factorial of %d Is : %d\n",num ,fact);
		return 0;
	}
	
