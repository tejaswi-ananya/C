#include<stdio.h>
#include<math.h>

void ceil_func(double a){
    printf("%f\n", ceil(a));
}

void floor_func(double a){
    printf("%f\n", floor(a));
}

void sqrt_func(double a){
    if(a>0){
        printf("%f\n", sqrt(a));                      //sqrt of -ve number gives -NaN(ind) = Not a number indeterminate
    }
    else{
        printf("Invalid input!!\n");
    }
}

void power_func(double b, double e){
    printf("%f\n", pow(b,e));
}

void fabs_func(double a){        //floating absolute value
    printf("%f\n", fabs(a));
    //printf("%f\n", fabsf((float)a));
    //printf("%Lf\n", fabsl(a));
}

void exp_func(double a){        
    printf("%f\n", exp(a));
    
}

int main(){
    ceil_func(2.3);
    floor_func(2.3);
    sqrt_func(-25);
    power_func(2.3,3.1);
    fabs_func(-7.5);
    exp_func(2);
    return 0;
}