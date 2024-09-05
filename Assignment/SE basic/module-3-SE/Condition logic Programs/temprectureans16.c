/* 16. Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below: 
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot 
Temp >=40 then Its Very Hot  */
#include<stdio.h>
int main (){
	int temp;
	printf("Enter temp in centigrade:",temp);
	scanf("%d",&temp);

if (temp < 0 ) {
	printf("this is a freezing weather\n");
} else if (temp < 10 ) {
	printf("this is a Very Cold weather\n");	
} else if (temp < 20 ) {
	printf("this is a Normal  weather\n");	
}else if (temp < 30 ) {
	printf("this is a Its hot weather\n");	
}else if (temp < 40 ) {
	printf("this is Very Hot weather\n");
} else {
   printf("its Very Hot weather\n");
} 
return 0;
}

