/* 6. Find area of Triangle Formula : A = 1/2 × b × h */ 

#include<stdio.h>
           //area of Triangle//
int main (){
  
  float base, height, area;
  
     printf("Enter base of triangle:" ,base);
     scanf("%f:", &base);
     
    printf("Enter height of triangle:" ,height);
    scanf("%f", &height);
     
    area = 0.5 * base * height;
    
    printf("Area Of Triangle Is : %.2f",area);
     
	return 0;
}
  

