/* 3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers */
#include<stdio.h>
int main(){
	int i=1 ,number,evencount =0,oddcount=0,oddsum=0,esum=0;
	for (i=1; i<=5; i++) {
    printf("\nEnter number :", number);
    scanf("%d",&number);
  
  if(number%2==0){
  	  printf("\n%d is even no\n",number);
  	  evencount++;
  	  esum += number;
    } else {
  	printf("\n%d is odd no",number);
  	oddcount++;
    oddsum += number;
    }
}
   printf("\nEven numbers: %d\n", evencount);
   printf("\nSum of even numbers: %d\n", esum);
  	     
   printf("\nodd numbers: %d\n", oddcount);
   printf("\nSum of odd numbers: %d\n", oddsum);
  	 return 0;
}

