//Accept 2 numbers and find out its sum check it size //
#include<stdio.h>
int main (){
	int num1, num2,sum ;
	
	printf("Num1 is :",num1);
	scanf("%d", &num1);
	
	printf("Num2 is :",num2);
	scanf("%d", &num2);
	
	sum = num1 + num2;
    printf("Total of Sum is :%d",sum);	
	
	if (sum > 32767){
		printf("sum is long");
		
	} else {
		printf("sum is short");
	}
	return 0;
}
