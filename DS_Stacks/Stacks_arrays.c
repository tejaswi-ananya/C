#include<stdio.h>

#define SIZE 6
int stack[SIZE];
int top = -1;

void push(int value){
    if(top == SIZE-1){
        printf("Stack is full\n");

    }
    else{
        top = top + 1;
        stack[top] = value;
    }
    
}

int pop(){
    int pop_element;
    if(top == -1){
        printf("Stack is empty\n");
    }
    else if(top == 0){
        pop_element = stack[top];
        top = -1;
        printf("Popped all elements out of the stack.\n");
    }
    else{
        pop_element = stack[top];
        top = top - 1;
    }
    return pop_element;
}

int peek(){
    int current_value;
    if(top == -1){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        current_value = stack[top];
        return current_value;
    }

    
}

void traverse(){
    int cursor;
    for(cursor = top;cursor >= 0; cursor--){
        printf("%d\n", stack[cursor]);
    }
    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);
    printf("%d is top of the stack.\n", peek());
    //traverse();
    // pop();
    // pop();
    // pop();
    //pop();
    traverse();
}