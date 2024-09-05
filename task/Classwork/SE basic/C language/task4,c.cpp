//find largest and smallest amoung three number//
#include<stdio.h>
int main() {
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Assume the first number is both the largest and the smallest
    int largest = num1;
    int smallest = num1;
    
    // Compare num2 with largest and smallest
    if (num2 > largest)
        largest = num2;
    else if (num2 < smallest)
        smallest = num2;
    
    // Compare num3 with largest and smallest
    if (num3 > largest)
        largest = num3;
    else if (num3 < smallest)
        smallest = num3;
    
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    
    return 0;
}


