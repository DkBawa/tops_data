// 18. Write a C program to calculate profit and loss on a transaction. //
#include<stdio.h>
int main (){
	int purch,sell;
	printf("Enter purchaing value :",purch);
	scanf("%d",&purch);
	
	printf("Enter selling value :",sell);
	scanf("%d",&sell);

	if (sell > purch) {
		printf("We make Profit ");
	} else if (sell < purch) {
		printf("We make Loss");
	} else {
		printf("We make no profit no loss");
	}
	return 0;
}
