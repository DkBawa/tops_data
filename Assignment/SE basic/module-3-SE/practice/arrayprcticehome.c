// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice 
#include<stdio.h>
int main() {
	int a[4];
	int i,j;
	for (i=0; i<=3;i++)
	{
		printf("Enter number :",a[i]);
	    scanf("%d",&a[i]);
	} 
	 printf("%d\n %d \n %d\n%d",a[0],a[1],a[2],a[3]);
	  
	if(a[0] >= a[1]){
		printf("\n%d",a[0]);
	} else{
		printf("%d",a[1]);
	} 
}


