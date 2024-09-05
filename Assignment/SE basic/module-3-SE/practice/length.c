#include<stdio.h>
#include<string.h>
// length//

main () {
	
	char a[5] ;
	int i ,len=0;
	printf("Enter name : ");
	gets(a);
	
	for (i=0;a[i]!='\0';i++) {
		len++;
	}
	
	printf("length of string : %d",len);
	
}

 // string is a group of charcters //
