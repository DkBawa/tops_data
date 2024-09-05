// 1. Write a program to find out the max number from given array using function //
#include<stdio.h>
int main (){
	int num[5];
	printf("enter numbers :",num[5]);
	scanf("%d\n %d %d\n %d \n %d",&num[0],&num[1],&num[2],&num[3],&num[4]);
	
	if 
	return 0;
}

int main() 
{ 
  
    // Initialize an ar
    int arr[] = { 23, 12, 45, 20, 90, 89, 95, 32, 65, 19 }; 
  
    // Find the size of the array 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // Intialize the variable which will denote the  maximum 
    // element 
    int res = arr[0]; 
  
    // Find the maximum value in the array and store it in 
    // res 
  
    for (int i = 0; i < n; i++) { 
        if (res < arr[i]) 
            res = arr[i]; 
    } 
    // print the elements of the array 
    printf("Array Elements: "); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
    // print the  maximum value 
    printf("The maximum value of the array is: %d", res); 
  
    return 0; 
}
