// pelndrome //
// reverse //
#include<stdio.h>
int main(){
	int num,rem,rev=0,real;
	printf("enter number :");
	scanf("%d",&num);
	real = num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	//	printf("%d",rem);
	}
//	printf("is reverse :%d",rev);//
	  if (real == rev)
        printf("%d is a palindrome.", real);
    else
        printf("%d is not a palindrome.",real);
	return 0;	
}
