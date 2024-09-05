// 6. Find the Character Is Vowel or Not //
#include<stdio.h>
int main (){
    char alpha;
        printf("Enter a Alphabet :",alpha);
        scanf("%c",&alpha); 
    
     if (alpha == 'a' || alpha =='A' ||alpha == 'e' || alpha =='E' ||alpha == 'i' || alpha =='I' ||alpha == 'o' || alpha =='O' ||
     alpha == 'u' || alpha =='U')
	   {
		printf("This is a vowel char :%c",alpha);
    } else {
		printf("This is a consonent :%c",alpha);
	} 
	
	return 0;
} 
