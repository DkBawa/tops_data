// 15. Store 5 numbers in array and sort it in ascending order //
#include<stdio.h>
int main (){
	int temp=0,i,j,num[5];
	for (i=0;i<=4;i++) {
		printf("Enter number :",num[i]);
		scanf("%d",&num[i]);
} printf("\n This is unsorted Array\n");
for (i=0;i<=4;i++) 
{
	printf(" %d ",num[i]);
}
for (i=0;i<4;i++) {
	for (j=i+1;j<5;j++) {
	 if (num[i] > num[j]) {
	 	temp = num[i];
	 	num[i] = num[j];
	 	num[j] = temp;
	 } 
	 }
}
printf("\n This is sorted Array\n");
for (i=0;i<5;i++) {
    printf(" %d ",num[i]);
}
return 0;
}
