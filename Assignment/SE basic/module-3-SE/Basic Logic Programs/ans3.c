/*3. WAP to Find Area And Circumference of Circle */ 
#include<stdio.h>
int main (){
    int radius;
	printf("Enter the radious of Circle :");
	scanf("%d",&radius);
	printf("\nradius of circle is :%d",radius);

    float area = 3.14 * radius * radius;
	printf("\narea of circle is = %.2f\n",area);
	 
    float Circumference = 2 * 3.14 * radius;
    printf("\nCircumference of circle is :%.2f",Circumference);
	return 0;
}

