/* 2. Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0  */
#include<stdio.h>
int main (){
	int m ;
	printf("Enter Number 1 Value :",m);
	scanf("%d",&m);
	
	if (m > 0)
	{
	printf("\n The Value of n is :1",m);
		
	} else if (m == 0) {
		printf("\n The Value of n is :0",m);
	} else {
		printf("\n The Value of n is: -1",m);

}
	return 0;
}
 // its right //


