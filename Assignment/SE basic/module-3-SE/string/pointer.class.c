// pointer gets//
#include<stdio.h>
main () {
	FILE* fptr;
	
	fptr = fopen("test1.txt","r");
	
	char a[100];
	fgets(a,100,fptr);
	
	printf("%s",a);
}
