// 9. C Program to Check Uppercase or Lowercase or Digit or Special Character //
#include<stdio.h>
int main (){
char chr;
	printf("Enter a char :",chr);
	scanf("%c", &chr);

	if (( chr >='a' && chr <= 'z') ||(chr >= 'A' && chr <= 'Z' )) {
	   printf("This Is A Alphabet : %c\n" ,chr);
	   if (chr >= 'a' && chr <= 'z')
	   printf("this alaphabet is lowercase :%c\n",chr );
	  else 
	   	printf("This alaphbet is Uppercase :%c\n",chr);
	 
	    }else if (chr >= '0' && chr <= '9') {
        printf("This is a digit : %c\n", chr);
    } else {
        printf("This  is a special character :%c\n", chr);
    }

    return 0;
}

