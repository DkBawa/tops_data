#include<stdio.h>
main (){
	
	int a[4];
	int i;
	int sum = 0;
	for (i=0;i<=3;i++){
		printf("\n Enter Elemenmt : ");
		scanf("%d",&a[i]);
			sum = sum + a[i];

	} for (i=0;i<=3;i++) {
		printf("\n Element are : %d",a[i]);
	}
	
	printf(" \nSum is : %d  ",sum);
	
}
