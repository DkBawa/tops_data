/*4. Find Area of Square formula : a = a2 */ 
#include<stdio.h>
           //Area of Square formula : a = a2
int main (){
	
	int side ,square;
	printf("Area of Square:\n");
	printf("Enter one side of Square :",side);
	scanf("%d",&side);
	
	square = side * side;
	printf("area of square is : %d",square);
	return 0;
}

