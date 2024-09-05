// strcture //
#include<stdio.h>
struct Mystructure{
	int a,b; // data member
}; s1;


main () {
	struct Mystructure s1; // variable of strcture 
	printf("Enter Number 1 : ");
	scanf("%d",&s1.a);
	
		printf("Enter Number 2 : ");
	scanf("%d",&s1.b);
	
	printf("Addition : %d",s1.a+s1.b);
} 
