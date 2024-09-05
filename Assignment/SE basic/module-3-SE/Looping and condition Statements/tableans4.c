// 4. WAP to print table up to given numbers //
#include<stdio.h>
int main (){
	int i= 1,num,sum;
	printf("Enter a num:",num);
	scanf("%d",&num);
	do{
		sum = i++ * num;
		printf("%d\n",sum);
	}while (i < 11);
	return 0;
}

