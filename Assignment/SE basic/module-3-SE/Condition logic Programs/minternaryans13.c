// 13.WAP to find minimum number among 3 numbers using ternary operator //
#include<stdio.h>
int main (){
	int no1 ,no2 ,no3,min;
	printf("Enter no :",no1 ,no2 ,no3);
	scanf("%d %d %d",&no1 ,&no2, &no3);
	
min = (no1 < no2)? ((no1 < no3)? no1:no3) : ((no2 <no3)? no2:no3);
printf("min no of is :%d",min);

return 0;
}
