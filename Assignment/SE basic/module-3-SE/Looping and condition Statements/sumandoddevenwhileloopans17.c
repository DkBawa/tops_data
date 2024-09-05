// 17. Calculate 5 numbers from user and calculate number of even and odd using of while loop //
#include<stdio.h>
int main (){
	int i=1,num,sum=0,even=0,odd=0;
	while (i <= 5){ 
	printf("Enter a number :",num);
    scanf("%d",&num);
    	sum += num;
          i++;
         if (num%2==0){
           even++;
		  } else {
		  odd++;
		  }
       		
}printf("sum of total no is :%d\n",sum);
printf("This is even no %d\n ",even);
printf("this is odd no %d\n",odd);
	return 0;
} 

