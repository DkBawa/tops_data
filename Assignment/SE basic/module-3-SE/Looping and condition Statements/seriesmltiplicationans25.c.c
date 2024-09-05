// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) //
#include<stdio.h>
int main (){
 int sum=0,i,num;
printf("enter a Value :",num);
scanf("%d", &num);

for (i=1; i<=num;i++) {

	printf("(%d * %d)", i ,i);
	if(i<num){
		printf(" + ");
	} else {
		printf(" = ");
	}
		sum += i * i;
} printf("\nTotal Sum Of this series is :%d",sum);	
return 0;
}

/*  for (i = 1; i <= num; i++) {
        printf("(%d * %d)", i, i);
        if(i < num) {
            printf(" + ");
        }
        sum += i * i;
    } 
    printf(" = %d\n", sum);*/
