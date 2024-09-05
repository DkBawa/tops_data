// 24. 1 + 2 + 3 + 4 + 5 + ... + n //
#include<stdio.h>
int main (){
	int n, i,sum=0;
	printf("Enter Your number :");
	scanf("%d", &n);
	
	for (i=1;i<=n;i++) {
		
		printf("%d",i);
		sum = sum + i;
			printf(" + ");
	}

	
	return 0;
}
