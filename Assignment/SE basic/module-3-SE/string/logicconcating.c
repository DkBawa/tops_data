//comparison
#include<stdio.h>
main () // function defination 
{
	char a[5],b[5] ,i,j;
	printf("Enter string 1: ");
	gets(a);
		printf("Enter string 2: ");
	gets(b);
	
	for (i=0;a[i]!='\0';i++);
	
	for (j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	} 
	a[i] = '\0';
	printf("String cocat is :%s",a);
	
/// due // che
}

  
