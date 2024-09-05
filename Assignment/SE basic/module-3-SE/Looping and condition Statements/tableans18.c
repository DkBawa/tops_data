// 18. Write a C Program to Print the Multiplication Table of N //
#include<stdio.h>
int main (){
	int i=0,n, n1, mul;
    printf("Enter a Number :",n);
	scanf("%d",&n);
	for(i=1;i<=10;i++) {
        mul = n*i;
		printf("%d\n",mul);
	}
		return 0;
}
