#include<stdio.h>

// void update(int *a, int *b){
//     int z = *a + *b;
//     int y = *a - *b;
//     printf("%d\n %d\n",z,y);
// }

// int main(){
//     int a,b;
//     printf("Enter no.s here:");
//     scanf("%d %d", &a,&b);
//     int *pa=&a;
//     int *pb=&b;

//     update(pa,pb);
//     //printf("%d\n %d\n", a,b);
// }

int main(){
    int i = 10;
    while(i-- > 0){
        printf("%d ",i);
    }
    return 0;
}
