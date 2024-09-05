/* 37. WAP to show 
i. Monday to Sunday using switch case 
ii. Vowel or Consonant using switch case */ 
#include<stdio.h>
int main (){
	 char ch;
	  printf("Enter A charcter :");
	  scanf("%c",&ch);
	  
	 switch(ch) {
	 case 'a':
	 case 'e':
	 case 'i':
	 case 'o':
	 case 'u':
	 case 'A':
	 case 'E':
	 case 'I':
	 case 'O':
	 case 'U':
	 	printf("%c : is a vowel sound ",ch);
	 	break;
	 	default:
	 		printf("%c : is a consonent char",ch);
		 }
	return 0;
}
