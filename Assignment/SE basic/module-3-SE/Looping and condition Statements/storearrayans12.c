// 12. WAP to accept 5 students name and store it in array 
#include<stdio.h>
int main (){
	int i;
	char name[5];
	for (i=0;i<=4;i++) 
	{
		printf("Enter Student Name : ",name[i]);
		scanf("%s",&name[i]);
	}
	
	return 0;
}
