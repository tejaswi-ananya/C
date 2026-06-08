#include <stdio.h>

int head = -1;
int tail = -1;
#define SIZE 5
int queue[SIZE];
#define TRUE 1
#define FALSE 0

int is_full()
{

    if (head == (tail + 1) % SIZE)
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
        tail = (tail + 1) % SIZE; // tail =0
        queue[tail] = val;
    }
    else if (is_full() == TRUE)
    {
        printf("CANNOT PERFORM ENQUEUE\n");
    }
    else
    {
        tail = (tail + 1) % SIZE;
        queue[tail] = val;
    }
}

void traverse()
{

    if ((head == tail) == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    int i = head;
    do
    {

        printf(" %d\n",queue[i]);
        i = (i + 1) % SIZE;

    } while (i != (tail + 1) % SIZE);

    printf("\n");
}

// int peek(int data)
// {
//     for (int i = head; i <= tail; i++)
//     {
//         if (queue[i] == data)
//             return i;
//     }
// }

int dequeue(){
    int temp = 0;
    if(is_empty()){
        return TRUE;
    }
    else if(head == tail)
    {
        head = tail = -1;
    }
    else{
        temp = queue[head];
        head = (head + 1) % SIZE;
        return temp;
    }
}

int main()
{
    int index;
    enqueue(10);
    
    enqueue(20);
    
    enqueue(30);
    

    enqueue(40);
    
    enqueue(50);
    

    dequeue();

    enqueue(60);
    traverse();
}