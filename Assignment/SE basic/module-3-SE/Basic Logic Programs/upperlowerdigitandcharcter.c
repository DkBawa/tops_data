//C Program to Check Uppercase or Lowercase or Digit or Special  Character 

#include<stdio.h>
main () {
	char n;
	printf("Enter your value :");
	scanf("%c",&n);
	if ((n >='a' && n<='z') ||(n >='A' &&  n<='z')) {
		if (n >='a' && n<='z') {
		     printf("This alphabet is Lowercase : %c",n);
		  }else {
		  	 printf("This alphabet is Uppercase : %c",n);
		  }
		  }else if (n >= '0' && n <= '9') {
		printf("Your enter value is digit :%c", n);
		
	} else {
		printf("enter value is Special char : %c", n);
	
	return 0;
	} 
}
