// 12.WAP to find maximum number among 3 numbers using ternary operator //
#include<stdio.h>
int main (){
	int no1 ,no2 ,no3,large;
	printf("Enter no :",no1 ,no2 ,no3);
	scanf("%d %d %d",&no1 ,&no2, &no3);
	
large = (no1 > no2)? ((no1 > no3)? no1:no3) : ((no2 >no3)? no2:no3);
printf("large no of is :%d",large);

return 0;
}

