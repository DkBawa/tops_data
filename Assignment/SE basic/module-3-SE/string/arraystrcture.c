// strcture //
#include<stdio.h>
struct Mystructure{
	int a[5],b[5] ,i,j; // data member
}; s1;


main () {
	struct Mystructure s1; // variable of strcture 
	int i,j;
	for (i=0;i<=5;i++)
	 {
	printf("Enter Number 1 : ");
	scanf("%d",&s1.a);
	}
for (j=0;j<=5;j++)
	
	{
	printf("Enter Number 2 : ");
	scanf("%d",&s1.b);
	}
	
	printf("Addition : %d",s1.a + s1.b);
} 
