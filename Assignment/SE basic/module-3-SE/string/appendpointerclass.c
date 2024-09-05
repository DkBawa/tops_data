// pointer apend//
#include<stdio.h>
main () {
	FILE* fptr;
	
	fptr = fopen("test1.txt","a");
	fprintf(fptr,"Hello this is append method!!");
	fclose(fptr);
}
