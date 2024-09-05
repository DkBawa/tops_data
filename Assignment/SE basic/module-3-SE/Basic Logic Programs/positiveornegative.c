//Check Number Is Positive or Negative 
#include<stdio.h>
main () {
	int n;
	printf("Enter Number :");
	scanf("%d",&n);
	if (n >=1) {
		printf("this is a positive number");
	  }if(n==0){
		printf("0 is null number");
	} else if (n < 1) {
		printf("this is negative no");
	} 
	 else {
		printf("plz enter valid value");

}
}
