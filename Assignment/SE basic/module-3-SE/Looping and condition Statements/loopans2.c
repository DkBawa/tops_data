// 2. WAP to accept 5 numbers from user and display all numbers //
#include<stdio.h>
int main(){
	
	int i=1 ,number;
	for (i=1; i<=5;i++) {
  printf("\nEnter %d number :", i);
  scanf("%d",&number);
  printf("\you Entered %d",number);
}
	return 0;
}
