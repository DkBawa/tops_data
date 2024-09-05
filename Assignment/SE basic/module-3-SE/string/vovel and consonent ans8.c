//8. Write a program in C to count the total number of vowels or consonants in a string. 
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdio.h>
#include <string.h>
 int main()
{
char str[100];  
    int i,vowels=0,consonants=0;
 
    printf("Enter  the string : ");
    gets(str);
     
    for(i=0;str[i];i++)  
    {
    	if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122))
    	{
		if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
		      vowels++;
            else
             consonants++;
        }
}
 	printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);
    
    return 0;
}

