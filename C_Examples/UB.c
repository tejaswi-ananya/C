#include<stdio.h>

// int f(int *p){
//     return (*p)++;
// }

int main(){
    // int x = 5;
    // printf("%d %d\n",f(&x),f(&x));
    int x=1;
    //printf("%d\n",printf("%d",x++));
    printf("%d\n",(x++,x++,x));
    return 0;
}