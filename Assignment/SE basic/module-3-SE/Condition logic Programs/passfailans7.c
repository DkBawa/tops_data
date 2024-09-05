// 7. Accept marks from user and check pass or fail //
#include<stdio.h>
int main (){
   int mark1,mark2,mark3,per;
	printf("Enter mark for sub1 : sub2: sub3:",mark1 ,mark2, mark3);
	scanf("%d %d %d", &mark1 , &mark2, &mark3);
	
	printf("sub1  :%d\n",mark1);
	printf("sub2  :%d\n",mark2);
	printf("sub3  :%d\n",mark3);
	
    int total = mark1 + mark2 + mark3 ;
   
    per = total * 100 / 300 ;
    printf("pre is %.2f",(float)per);
    
    if (per >= 33 ){
    	printf("\nYou Pass The Exam\n",per);
	} else {
		printf("\nTry Again",per);
	}
    
	 return 0;
} 

