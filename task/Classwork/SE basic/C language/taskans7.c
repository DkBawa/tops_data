//take number from user and find it is positive or negtive or zero//
#include<stdio.h>
int main (){
	int num;
	printf("Enter a value :",num);
	scanf("%d" ,&num);
	
	if (num > 0) {
		printf("This is a positive number :%d",num);
	} else if (num < 0) {
	
	printf("This is a negetive number :%d",num);
}else {
	printf("This is a Zero number " );
}
	
	return 0;
}
