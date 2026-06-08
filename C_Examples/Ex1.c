#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    // printf("%p\n", (void*)(arr   + 0));
    printf("%p\n", (void*)(arr   + 1));
    // printf("%p\n", (void*)(arr   + 2));
    // printf("%p\n", (void*)(arr   + 3));
    // printf("%p\n", (void*)(arr   + 4));
    printf("%p\n", (void*)(&arr  + 1));
    return 0;
}
