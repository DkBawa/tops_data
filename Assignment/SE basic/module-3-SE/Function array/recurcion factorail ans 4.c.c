// recursion factorial //
#include<stdio.h>
int main ()
{
	int num;
	printf("Enter Numnber to find factorial :");
	scanf("%d",&num);
	printf("%d ",fact(num));
	
}
 int fact(int num )
 {
 	if (num >=1 ) {
 		return num*fact(num-1);
	 } else {
	 	return 1;
	 }
 }
