#include <stdio.h>
int main() {
  int n;
  int arr[5];
  printf("Enter the number of elements (5): ");
  scanf("%d", &n);
      int i;
  for (i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
printf("Largest element = %d", arr[0]);
return 0;
}

