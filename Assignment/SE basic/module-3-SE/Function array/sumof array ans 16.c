// 16.Accept 5 numbers from user and perform sum of array //
#include<stdio.h>
int main (){
	int i,num[5],sum=0;
	for (i=0;i<5;i++) 
	{
	printf("Enter Value Number %d:", i+1);
	scanf("%d",&num[i]);
		} 
	//	printf("\n Enters Numbers",num[i]);
	//	for (i=0; i<5;i++) {
		//	printf("  %d", num[i]);
	//	}
		for (i=0;i<5;i++) {
	
			sum = sum + num[i];
			
		} printf("\nSum of numbers is :%d",sum);
		
return 0;
} 



