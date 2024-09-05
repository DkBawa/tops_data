// 12. WAP to find maximum number among 3 numbers using ternary operator 
#include<stdio.h>
main () {
	int n1,n2,n3,maxi;
	printf("Enter Numbers :\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1 > n2 && n1 > n3){
		printf("This is maximum number :%d",n1);
	} 	if(n2 > n3 && n2 > n3) {
		printf("This is maximum number :%d",n2);
	} else {
		printf("This is maximum number :%d",n3);
	}
}
