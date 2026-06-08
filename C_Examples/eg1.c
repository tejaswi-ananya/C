#include<stdio.h>
//#include "headers.h"


int main()
{
    int *ptr = NULL;
    int b =10;
    printf("%p\n",&b);
    printf("%p\n",ptr);
    //printf("%d: value of ptr\n",*ptr);

    ptr = &b;
    
    printf("%d: value of ptr\n",*ptr);
    printf("%p : address of ptr\n",ptr);

    return 0;
}