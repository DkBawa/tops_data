// 14.Accept 5 numbers from user and find those numbers factorials  //
#include<stdio.h>
int main (){
	
	int num,num2,num3,num4,num5,fact=1,fact2=1,fact3=1,fact4=1,fact5=1;
    printf("Enter a num :\n",num);
	scanf("%d %d %d %d %d",&num ,&num2 ,&num3 ,&num4 ,&num5);
		
		for ( int i = 1; i <= num; i++) {
			fact *= i;        
		} 
		
		for( int i = 1; i <= num2; i++){
			fact2 *= i;        
			}
			
			for( int i = 1; i <= num3; i++){
			fact3 *= i;        
			}
			
			for( int i = 1; i <= num4; i++){
			fact4 *= i;        
			}
			for( int i = 1; i <= num5; i++){
			fact5 *= i;        
			}
	printf("Factorial of %d is :%d\n", num, fact);
    printf("Factorial of %d is :%d\n", num2, fact2);
    printf("Factorial of %d is :%d\n", num3, fact3);
    printf("Factorial of %d is :%d\n", num4, fact4);
    printf("Factorial of %d is :%d\n", num5, fact5);
		return 0;
	}
	  
