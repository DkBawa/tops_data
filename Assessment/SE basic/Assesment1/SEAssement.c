// Assesment //
// C Food Order System order //
#include<stdio.h>
foodmenu(int finalbill) {
	int choice,qun;
	int add,bill=0;

		printf("-------------Menu------------\n");
printf("1.Pizza       price = 100rs/pcs\n");
printf("2.Burger      price = 120rs/pcs\n");
printf("3.Dosa        price = 150rs/pcs\n");
printf("4.Idli        price = 80rs/pcs\n");

printf("Please enter your choice :\n");
scanf("%d",&choice);
printf("\nEnter Quntity :\n");
scanf("%d",&qun);

switch(choice) {
	case 1: 
	printf("You Choose Pizza !!");
	bill = 100 * qun;
	break;
		case 2:
	printf("You Choose Burgar !!");
		bill = 120 * qun;
	break;
		case 3: 
	printf("You Choose Dosa !!");
		bill = 150 * qun;
	break;
		case 4: 
	printf("You Choose Idali !!");
		bill = 80 * qun;
	break;
	default: 
	printf("You Enter invaild key !!");
	break;
}
printf("Bill is :%d\n",bill);
finalbill +=bill;

printf ("\n You want to add more items : y=1/n=2\n");
scanf("%d",&add);

if (add==1) {
	foodmenu(finalbill);
} else {
	printf("\nFinal Bill is :%d\n",finalbill);
}

} 
int main() 
{
	foodmenu(0);
	return 0;
}
