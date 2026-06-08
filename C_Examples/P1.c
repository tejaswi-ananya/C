#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;

    p++;    // move to next element
    printf("%d\n", *p);    // 20

    p--;    // move back
    printf("%d\n", *p);    // 10

    // Precedence trap — very common mistake!
    // *p++;    // dereferences p, THEN increments p  (postfix first, then *)
    // *++p;    // increments p FIRST, then dereferences
    // (*p)++;  // dereferences p, then increments the VALUE at p
    
    printf("Results of *p++ : \n");
    int *q = arr;
    printf("%d\n", *q++);  // prints 10, q now points to arr[1]
    printf("%d\n", *q);    // prints 20

    printf("Results of *++p : \n");
    int *t = arr;
    printf("%d\n", *++t);  // increments t first that is points to arr[1], then dereferences and prints 20.
    printf("%d\n", *t);  

    printf("Results of (*p)++ : \n");
    int *y = arr;
    printf("%d\n", (*y)++);  
    printf("%d\n", *y);  

    return 0;
}