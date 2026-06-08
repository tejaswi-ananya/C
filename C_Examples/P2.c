#include <stdio.h>
int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = 5;
    int *p;

    // Method 1: index-style (most readable)
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));   // same as arr[i]

    printf("\n");

    // Method 2: pointer walk (classic C style)
    for (p = arr; p < arr + n; p++)
        printf("%d ", *p);

    printf("\n");

    // Method 3: end pointer sentinel
    int *end = arr + n;   // one past the last element — valid address
    for (p = arr; p != end; p++)
        printf("%d ", *p);

    return 0;
}