#include<stdio.h>

int main(){
    char *a[] = {"red", "green", "blue"};
    char b[][10] = {"red", "green", "blue"};

    a[0][0] = 'R';  // a[0] is a pointer to a string literal here, string literals are stored in read-only memory and you cannot modify it, so when you do the program crashes.
    b[0][0] = 'R';

    printf("%s\n", a[0]);
    printf("%s\n", b[0]);

    a[1] = "yellow";
    //b[1] = "yellow";

    printf("%s\n", a[1]);
    //printf("%s\n", b[1]);

   

    return 0;

}