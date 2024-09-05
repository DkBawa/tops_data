/*2. Write a program in C to separate individual characters from a string.  */
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char str[100];
    int l=0;
       printf("Input the name : ");
      // scanf("%s",&str); isko store nhi karvayenge
       fgets(str, sizeof str, stdin);
	   printf("The characters of the name are : \n");
    while(str[l]!='\0')
    {
       printf("%c\n", str[l]);
       l++;
    }
    printf("\n");
}
