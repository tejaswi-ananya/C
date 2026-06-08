#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int (*p)[5] = &arr;

    printf("%d\n", (*p)[2]);     // (A) 30
    printf("%d\n", p[0][2]);     // (B) 30
    printf("%d\n", *(*p + 2));   // (C)  p --> pointer to the whole array, deference *p (give me the array i.e.{10, 20, 30, 40, 50} ) When an array is used in expressions, it decays into a pointer to its first element.
    return 0;                           //  *p --> pointer to first element(10), (*p+2) --> pointer to the 2nd element(30), *(*p+2) --> 30.
}
// What does each of (A), (B), (C) print? Are they all equivalent?
