//10. Write a program in C to extract a substring from a given string 
#include <stdio.h>
 #include <stdlib.h>
int main()
{
   char string[1000], sub[1000];
   int position, length, c = 0;
 
   printf("Input a string\n");
    fgets(string, sizeof string, stdin);
 
   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);
 	
   while (c < length) {
      sub[c] = string[position+c-1];
      c++;
   }
   sub[c] = '\0';
 
   printf("Required substring is \"%s\"\n", sub); 
 
   return 0;
}
 
