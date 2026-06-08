#include<stdio.h>

void func(int x, int y){
    x = 10;
    y = 50;
    //printf("%x%x\n", x , y);
    printf("%d%d\n", x, y);
}

int main(){
    int a = 20;
    int b = 30;
    func(a,b);
    printf("%d%d\n", a, b);
    return 0;
}