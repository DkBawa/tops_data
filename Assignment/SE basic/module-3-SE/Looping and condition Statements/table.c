// 18. Write a C Program to Print the Multiplication Table of N //
#include<stdio.h>
int main (){
	int i=1,n,table;
	printf("Enter A Number :",n);
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		table = n*i;
		printf("%d\n",table);
	} 
		
	
	
	return 0;
}
