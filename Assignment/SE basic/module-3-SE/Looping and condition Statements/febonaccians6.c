// 6. WAP to print Fibonacci series up to given numbers //
#include<stdio.h>
int main (){
	int i=2,n,n1=0,n2=1,n3;
	printf("enter end value :",n);
	scanf("%d",&n);
		printf("%d\n",n1);
	while(i<=n){
	n3=n1+n2;
	n1=n2;
    n2=n3;
	i++;
	printf("%d\n",n3);
	} 
	return 0;
}
