#include<stdio.h>

int search(int a[], int key,int len){
    
    for(int i = 0; i <= len -1; i++){
        if(key == a[i]){
            printf("Yes!!Its available.");
            printf("\n");
            return i;
        }
    }
    return -1;
   
}

int insert_end(int a[], int n, int cap,int element){
    // if(n >= cap){
    //     printf("Cannot insert this element at the end of the array.");
    //     return -1;
    // }
    // else{
        a[n] = element;
        n += 1;
        printf("Array after inserting an element at the end of the array is: \n");
        for(int i = 0; i < n; i++){
            printf("%d  ", a[i]);
        }
    return n;   
    //}

}

int main(){

    int a[6] = {1,2,4,6,7,8};
    int len = sizeof(a)/sizeof(a[0]);
    int n = 8;
    
    int res = search(a,4,len);
    printf("Index: %d",res);
    printf("\n");

    n = insert_end(a,n,len,5);

    return 0;
}