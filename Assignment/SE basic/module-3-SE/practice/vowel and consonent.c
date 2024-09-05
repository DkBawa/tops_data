/* 37. WAP to show 
i. Monday to Sunday using switch case 
ii. Vowel or Consonant using switch case */ 

#include<stdio.h>
int main (){
	char n = 7;
	printf("Enter Charcter :");
	scanf("%c", &n);

	switch (n) {
		case 'A':
			printf("%c is Vowel",n);
			break;
				case 'a':
			printf("%c is Vowel",n);
			break;
			
			case 'E':
			printf("%c is Vowel",n);
			break;
			case 'e':
			printf("%c is Vowel",n);
			break;
			
				case 'i':
			printf("%c is Vowel",n);
			break;
			case 'I':
			printf("%c is Vowel",n);
			break;
			
				case 'O':
			printf("%c is Vowel",n);
			break;
			case 'o':
			printf("%c is Vowel",n);
			break;
			
				case 'U':
			printf("%c is Vowel",n);
			break;
			case 'u':
			printf("%c is Vowel",n);
			break;
			
	
			
			default:
				printf("%c is consonent",n);
			} 
				return 0;
} 

