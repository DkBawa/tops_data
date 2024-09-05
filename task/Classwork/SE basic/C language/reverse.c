// reverse //
#include<stdio.h>
int main(){
	int num,rem=0,rev=0;
	printf("enter number :");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	//	printf("%d",rem); //
	}
	printf("is reverse :%d",rev);
	
	return 0;	
}
