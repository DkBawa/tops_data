//9. Find circumference of Triangle formula : triangle = a + b + c //
#include<stdio.h>
    int main (){
    	
	int base, side1, side2, cir;
	printf("Circumference of Triangle\n");
	printf("Enter base of triangle :",base);
	scanf("%d" ,&base);
	
	printf("Enter side1 of triangle :",side1);
	scanf("%d" ,&side1);
	
	printf("Enter side2 of triangle :",side2);
	scanf("%d" ,&side2);
	
	cir = base + side1 + side2;
	
	printf("circumference of Triangle is :%d",cir);
	
		return 0;
}
