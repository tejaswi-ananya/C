#include<stdio.h>
#include <stdlib.h>

typedef struct Stack{
    int data;
    struct Stack *next;
}stack;

stack *top = NULL;

void push(int value){
    stack *new_node = malloc(sizeof(stack));
    if(new_node == NULL){
        printf("Memory allocation is not done\n");
        return;

    }

    new_node->next = top;
    new_node->data = value;
    top = new_node;
}

int pop(){
    int pop_element;
    stack *temp;
    if(top == NULL){
        printf("Stack is empty.\n");
    }
    else{
        
        temp= top;
        pop_element = top->data;
        top = top->next;
        free(temp);
        temp = NULL;
    }
    return pop_element;
}


void traverse(){
    stack *cursor;
    for(cursor = top; cursor != NULL;cursor = cursor->next){
        printf("%d\n", cursor->data);
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    traverse();
    printf("----------------After pop------------------\n");
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    traverse();
}