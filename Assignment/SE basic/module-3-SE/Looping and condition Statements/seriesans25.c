// 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>  // due //
int main (){
 int sum=0,i,num,innersum,j;
printf("enter a Value :",num);
scanf("%d", &num);

for (i=1; i<=num;i++) { 

	for (j=1;j<=i;j++) {
		innersum += j;
	} printf("%d",j);
	if(j < i){
		printf(" + ");
	} else if (i < num){
		printf( " + ");
	}
		sum += i + i;
} printf("\nTotal Sum Of this series is :%d",sum);	
return 0;
}  

