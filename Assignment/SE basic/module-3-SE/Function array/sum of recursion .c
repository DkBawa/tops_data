// recursion Addtion  //
#include<stdio.h>
int main ()
{
	int num;
	printf("Enter Numnber to find sum :");
	scanf("%d",&num);
	printf("%d ",sum(num));
	
}
 int sum(int num )
 {
 	if (num >=1 ) {
 		return num + sum(num-1);
	 } else {
	 	return 0;
	 }
 }
