/*5. Find Area of Cube formula : a = 6a2 */ 

#include<stdio.h>
           //Area of Cube formula : a = 6a2
int main (){
	int side ,area;
	printf("Area of Cube:\n");
	printf("Enter one side of Cube:",side);
	scanf("%d",&side);
	
	area = 6* side * side;
	printf("\narea of Cube is : %d",area);
	return 0;
}

