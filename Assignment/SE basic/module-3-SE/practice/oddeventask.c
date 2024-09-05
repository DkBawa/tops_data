#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}
/* 
if (n==0)
{ 
printf("%d is zero",n);
}

else if (n%2==0)
{
printf("%d is even", n);
}
else {
printf(""%d is odd , n);
}
}



*/
