#include <stdio.h>
int main() {
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[4] = arr;

    printf("%d\n", (*p)[1]);    // (A) 2 p[0][1]
    p++;                 
    printf("%d\n", (*p)[1]);    // (B) 6 p[1][1]
    p++;
    printf("%d\n", (*p)[1]);    // (C) 10 p[2][1]
    printf("%d\n", p == arr+2 ? 1 : 0);  // (D) 1 p is pointing to the 2nd array {9,10,11,12}, arr is basically 0th row and arr+2 is 2nd row i.e. 2nd array
    return 0;
}
