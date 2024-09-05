// 10.find the area of a rectangular prism formula : A=2(wl+hl+hw) //

#include<stdio.h>
      int main (){
	int width, length, height, area ,total_area;
	printf("Enter the rectangular width :", width);
	scanf("%d", &width);
	
	printf("Enter the rectangular length :", length);
	scanf("%d", &length);
	
	printf("Enter the rectangular height :", height);
	scanf("%d", &height);
	
	area = (width * length) + (length * height ) + (height * width);
	
	//printf("Area of a rectangular prism is : %d\n", area);
	
	total_area = 2 * area ;
	printf("Total Area of rectangular prism is : %d\n",total_area);

	return 0;
}
