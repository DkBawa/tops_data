// 17. Write a C program to check whether a triangle can be formed with the given values for the angles. //
#include<stdio.h>
int main () {
	int a1,a2,a3,a4;
	printf("Enter Triangle Value :",a1,a2,a3);
	scanf("%d%d%d:", &a1 , &a2 , &a3);
	a4 = a1 + a2 + a3;
	printf("Total enter value is :%d\n",a4);
	if (a4 == 180) {
		printf("This is a Triangle Values");
	} else {
		printf("this is not Triangles Values");
	}
	return 0;
}

