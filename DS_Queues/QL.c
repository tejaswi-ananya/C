#include <stdio.h>

int head = -1;
int tail = -1;
#define SIZE 5
int queue[SIZE];
#define TRUE 1
#define FALSE 0

int is_full()
{

    if (tail == SIZE - 1)
    {
        return TRUE;
    }
    return FALSE;
}
int is_empty(){
    if((head == -1) && (tail == -1)){
        return TRUE;
    }
    return FALSE;
}

void enqueue(int val)
{

    if (head == -1 && tail == -1)
    {
        head = 0;
        tail = tail + 1; // tail =0
        queue[tail] = val;
    }
    else if (is_full() == TRUE)
    {
        printf("CANNOT PERFORM ENQUEUE\n");
    }
    else
    {
        tail = tail + 1;
        queue[tail] = val;
    }
}

void traverse()
{
    for (int i = head; i <= tail; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int peek(int data)
{
    for (int i = head; i <= tail; i++)
    {
        if (queue[i] == data)
            return i;
    }
}

int dequeue(){
    int temp = 0;
    if(is_empty()){
        return TRUE;
    }
    else if(head == tail){
        head = tail = -1;
    }
    else{
        temp = queue[head];
        head = head + 1;
        return temp;
    }
}

int main()
{
    int index;
    enqueue(10);
    //    printf("%d\n", peek(10));
    enqueue(20);
    //  printf("%d\n", peek(20));

    enqueue(30);
    //  printf("%d\n",  peek(30));

    enqueue(40);
    //    printf("%d\n",  peek(40));

    enqueue(50);
    // printf("%d\n", peek(50));

    dequeue();
    traverse();
}