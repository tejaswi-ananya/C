#include<stdio.h>

void insertAny(int a[], int size, int pos, int element){
    for(int i = size; i > pos; i--){
        a[i] = a[i-1];
    }
    a[pos] = element;
    size += 1;
    for(int i =0; i < size; i++){
        printf("%d ", a[i]);
    }
}



int main(){
    int a[5] = {1,2,3,6,7};
    int size = sizeof(a)/sizeof(a[0]);
    int pos = 0;

    printf("%d\n", size);

    insertAny(a,size,pos,5);
}