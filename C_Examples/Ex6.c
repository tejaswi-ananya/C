#include <stdio.h>
int main() {
    int arr[4] = {10, 20, 30, 40};
    int *p = (int *)(&arr + 1);  // cast away array-pointer type

    printf("%d\n", *(p - 1));   // (A)
    printf("%d\n", *(p - 2));   // (B)
    printf("%d\n", *(p - 4));   // (C)
    return 0;
}
