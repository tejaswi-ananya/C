#include<stdio.h>
#define SIZE 4

void func(int a[]){
    for(int i =0; i < SIZE ;i++){
        
        printf("%d ", a[i]);
    }
}

void f1(int x){
    x = x + 1;
    printf("%d\n",x);
}

int main(){
    int a[]= {1,2,3,4};
    int b[4];
    int size = sizeof(a)/sizeof(a[0]); //
    func(a);
    printf("\n");
    f1(a[1]);

    for(int i= 0; i <= 3;i++){
        printf("%p  ", &a[i]);
    }
    // printf("%d",size);

    // for(int i =0; i <= 3;i++){
    //     scanf("%d", &a[i]);
    // }

    // for(int i =0; i <=SIZE ;i++){
    //     b[i] = a[i];
    //     printf("%d\n ", b[i]);
    // }
    // b[1]=a[3];                         //{1,2,3,4}
    // printf("%d\n",b[1]);
    // a[3]=a[1];
    // printf("value of a[3] = %d\n",a[3]);
    // a[1]=a[3];
    // printf("value of a[1]= %d\n",a[1]);

    // a[1] = a[0] + 30;


    return 0;
}