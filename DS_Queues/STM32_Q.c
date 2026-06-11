#include <stdint.h>

#define SIZE 5

#define TRUE  1
#define FALSE 0

int head = -1;
int tail = -1;

int queue[SIZE];

int dequeue_data = 0;    

int is_full(void)
{
    if(head == (tail + 1) % SIZE)
    {
        return TRUE;
    }

    return FALSE;
}

int is_empty(void)
{
    if((head == -1) && (tail == -1))
    {
        return TRUE;
    }

    return FALSE;
}

void enqueue(int val)
{
    if(is_full())
    {
        return;
    }

    if(is_empty())
    {
        head = 0;
        tail = 0;
        queue[tail] = val;
    }
    else
    {
        tail = (tail + 1) % SIZE;
        queue[tail] = val;
    }
}

int dequeue(void)
{
    int temp;

    if(is_empty())
    {
        return -1;
    }

    temp = queue[head];

    if(head == tail)
    {
        head = -1;
        tail = -1;
    }
    else
    {
        head = (head + 1) % SIZE;
    }

    return temp;
}

int main(void)
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    dequeue_data = dequeue();   
    dequeue_data = dequeue();  

    while(1)
    {
        
    }
}