// 13.Find character value from ascii //
#include<stdio.h>
int main (){
	int i;
	printf("Enter number for find charcter value :");
	scanf("%d",&i);
	if(i>=65 && i<=122) {
		printf("asscii value is :%d = %c",i ,i);
	} else {
		printf("please enter correct value");
	}
	
}
	
