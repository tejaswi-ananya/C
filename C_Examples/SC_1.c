#include<stdio.h>

void func(int i){
     printf("The result is: \n");

    switch(i){
        case 1:
        printf("%d", a + b);
        break;

        case 2:
        printf("%d", a - b);
        break;

        case 3:
        printf("%d", a * b);
        break;

        case 4:
        if(b != 0)
            printf("%d", a / b);
        else
            printf("Error!!");
        break;

        case 5:
        if(b != 0)
            printf("%d", a % b);
        else
            printf("Error!!!");
        break;

        default:
        printf("Invalid choice.");
    }


}

int main() {
    int a,b;

    printf("This is a simple program to create a calculator using switch case.\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("Enter your choice of operation: \n");
    scanf("%d", &i);
    printf("Enter the numbers here a, b: \n");
    scanf("%d%d", &a, &b);

   
    return 0;

}