/*7. Find area of Rectangle Formula : A=wl */ 

#include<stdio.h>
           //area of Rectangle//
int main (){
	
	int length, width, area;
	printf("Enter lenght of rectangle : " ,length);
	scanf("%d", &length);
	
	printf("Enter width of rectangle : " ,width);
	scanf("%d", &width);
	
	area = length * width ;
	printf(" Rectangle area = %d ",area);
	
	return 0;
}
