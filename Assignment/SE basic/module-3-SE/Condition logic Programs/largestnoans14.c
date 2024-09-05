// 14.WAP to find the largest of three numbers.
#include<stdio.h>
int main (){
	int no1, no2 ,no3 ;
	printf("Enter Your Value :",no1,no2,no3);
	scanf ("%d %d %d",&no1,&no2 ,no3);
	
	if (no1 > no2 || no1 > no3) {
		printf("Largest no is this :%d");
	} else if (no2 > no1 && no2 > no3) {
		printf("largest no is this :%d ");
	} else {
		printf("largest no is this :%d");
	}
	return 0;
}
