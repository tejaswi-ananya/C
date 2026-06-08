#include<stdio.h>

void cbv(int x, int y){
    x = 20;
    y = 10;
    //printf("x = %d, y = %d", x,y);
    
}

void cbr(int *ptr1, int *ptr2){
    *ptr1 = 20;
    *ptr2 = 10;
    
    printf("Value of ptr1 = %p\n",ptr1);
    printf("Value of ptr2 = %p\n",ptr2);
    
}


int main() {
    int a = 10, b = 20;
    cbv(a,b);
    printf("a = %d, b = %d\n", a,b);

    printf("**********************************\n");

    cbr(&a,&b);

    printf("**********************************\n");
    
    printf("a = %d, b = %d\n", a,b);
    printf("Address of a = %p\n",&a);
    printf("Address of b = %p\n",&b);
    return 0;
}