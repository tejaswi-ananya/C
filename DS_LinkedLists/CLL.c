#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

typedef struct Node
{
    int data;
    struct Node *next;
} node;

node *head = NULL;

int check_mem_alloc(node *block)
{
    if (block == NULL)
    {
        printf("Memory not allocated");
        return FALSE;
    }
    return TRUE;
}

void create(int element)
{

    node *temp = malloc(sizeof(node));
    if (head == NULL)
    {

        temp->data = element;
        temp->next = temp;
        head = temp;
    }
}

void insert_begin(int value)
{
    node *new_node = malloc(sizeof(node));
    if (check_mem_alloc(new_node))
    {
        new_node->data = value;
        new_node->next = head;
        head->next = new_node;
        head = new_node;
    }
}

void insert_end(int value1)
{
    node *new_node = malloc(sizeof(node));
    if (check_mem_alloc(new_node))
    {
        node *cursor = head;
        do
        {
            cursor = cursor->next;

        } while (cursor->next != head);
        cursor->next = new_node;
        new_node->next = head;
        new_node->data = value1;
    }
}

void insert_after(int value1, int existing_element)
{
    node *new_node = malloc(sizeof(node));
    if (check_mem_alloc(new_node))
    {
        node *cursor = head;
        do
        {
            if (cursor->data == existing_element)
            {
                new_node->next = cursor->next;
                cursor->next = new_node;
                new_node->data = value1;
                return;
            }

            cursor = cursor->next;

        } while (cursor != head);
    }
    printf("Element %d is not present in the list", existing_element);
    free(new_node);
}

void insert_before(int value, int existing_element)
{
    node *new_node = malloc(sizeof(node));

    if (check_mem_alloc(new_node))
    {
        new_node->data = value; 

        node *cursor = head;
        node *prev = NULL;
        do
        {
            if (cursor->data == existing_element)
            {
                if (cursor == head)
                {
                    node *temp = head;
                    while (temp->next != head)
                    {                             // to traverse through the list to find the last node. We need the node that is pointing to  
                        temp = temp->next;        //the head, which now should point to the new_node which will become head now.   
                    } 
                        
                    new_node->next = head;  
                    temp->next = new_node;
                    head = new_node;
                }
                else
                {
                    new_node->next = cursor;
                    prev->next = new_node;
                }
                return;
            }
            prev = cursor;
            cursor = cursor->next;
        } while (cursor != head);

        printf("Element %d is not present in the list", existing_element);
        free(new_node);
    }
}

void traverse()
{
    if (head == NULL)
    {
        printf("NO NODE IS CREATED\n");
        return;
    }

    node *cursor;
    cursor = head;

    do
    {
        printf("%d\n", cursor->data);
        cursor = cursor->next;
    } while (cursor != head);
}

int main()
{
    create(10);
    insert_begin(20);
    insert_end(30);
    insert_after(40, 10);
    insert_after(50, 80);
    insert_before(50,20);
    insert_before(60,40);

    traverse();
}
