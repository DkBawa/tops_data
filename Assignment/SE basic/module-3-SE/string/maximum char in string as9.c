//9. Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
#include<string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    int length = strlen(str);
    printf("The string has %d characters.\n", length);

    return 0;
}


