//take character from user and find it is vowel (a,e,i,o,u) or consonents //
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
