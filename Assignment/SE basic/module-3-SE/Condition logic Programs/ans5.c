// 5. Check Number Is Positive or Negative //
#include<stdio.h>
int main (){
	int no;
	printf("Enter a number :",no);
	scanf("%d",&no);
	if (no >= 0){
		printf("This is a Positive no");
	}
	else {
		printf("This is a Negative no");
	}
	return 0;
}
