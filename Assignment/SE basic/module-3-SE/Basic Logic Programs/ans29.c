//29.Convert minutes into seconds and hours //
#include<stdio.h>
int main (){
	int minute ,hours ,second;
	printf("Please enter minute :",minute);
	scanf("%d", &minute);
	
	hours = minute / 60 ;
	printf("\nConverted minute in hours is : %d\n",hours);
	 
	second = minute * 60 ;
	 printf("Converted minute in second is : %d", second);
	
	return 0;
}
