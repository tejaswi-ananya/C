#include<stdio.h>

void delete(int a[], int size, int pos){
    for(int i = pos; i <= size-1; i++){
        a[i] = a[i+1];
    }
    size -= 1;
    for(int i = 0; i < size;i++){
        printf("%d ",a[i]);
    }
}

void update(int a[], int size, int pos, int element){
    a[pos] = element;
    for(int i = 0; i < size;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int a[] = {2,4,5,1,6};
    // if i have to delete (replace) 

    int size = sizeof(a)/sizeof(a[0]);
    int pos = 2;

    //delete(a,size,pos);
    printf("\n");

    update(a,size,pos,8);


}