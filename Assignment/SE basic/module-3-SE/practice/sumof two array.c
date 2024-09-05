#include<stdio.h>
main (){
	
	int a[4];
	int b[4];
	int i,j;
	int sum = 0;
	int sum1 =0;
	int sum2 =0;
	for (i=0;i<=3;i++){
		printf("\n Enter Elemenmt : ");
		scanf("%d",&a[i]);
			sum = sum + a[i];

	} for (i=0;i<=3;i++) {
		printf("\n Element are : %d",a[i]);
	} 
		for (j=0;j<=3;j++){
		printf("\n Enter Elemenmt : ");
		scanf("%d",&b[j]);
			sum1 = sum1 + b[j];

	} for (j=0;j<=3;j++) {
		printf("\n Element are : %d",a[i]);
	
	}  sum2 = sum + sum1;
	printf("\nTotal Sum is : %d",sum2);
}

	
