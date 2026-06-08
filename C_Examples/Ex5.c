#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int (*p)[5] = &arr;

    printf("%p\n", (void*)p); // p is a pointer to a whole array arr, it decays to int (*)[5], still it points to the 0th element sp prints the address of the 0th element
    printf("%p\n", (void*)*p);   // same or different? same, because again p --> pointer to a whole array --> int (*)[5], 0th element, *p --> 0th element, prints address of 0th element

    printf("%d\n", **p);         // (A) 10   *(*p+0)
    printf("%d\n", *(*p + 1));   // (B) 20
    return 0;
}
