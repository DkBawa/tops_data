// pointer//
#include<stdio.h>
main () {
	FILE* fptr;
	
	fptr = fopen("test1.txt","w");
	fprintf(fptr,"Hello this is write method!!");
	fclose(fptr);
}
