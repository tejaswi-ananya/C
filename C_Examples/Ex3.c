#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int (*p)[5] = &arr;
    int *q       = arr;

    printf("%zu\n", sizeof(arr));   // (A) 20 arr is an array of 5 ints so 5*4=20
    printf("%zu\n", sizeof(p));     // (B) 8 p is a pointer so size of a pointer is 8 bytes
    printf("%zu\n", sizeof(*p));    // (C) 20 type is int[5], full array so 5*4=20
    printf("%zu\n", sizeof(q));     // (D) 8 q is a pointer so 8 bytes
    printf("%zu\n", sizeof(*q));    // (E) 4 decays to int* that is size of an element in array is 4 bytes because it is an integer
    return 0;
}
