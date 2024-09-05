// 5. WAP to print factorial of given number //
#include<stdio.h>
int main (){
	int i,num,fact=1;
	
	printf("Enter a num:",num);
	scanf("%d",&num);
	
	for(i=1;i<=num; i++)
	{
		 fact = i*fact;   
    }
	printf("%d ka factorial is %d\n",num ,fact);  
	return 0;
}
 
