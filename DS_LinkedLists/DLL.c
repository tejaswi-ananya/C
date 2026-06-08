#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} node;

node *head = NULL;

int check_mem_alloc(node *block)
{
    if (block == NULL)
    {
        printf("Memory not allocated\n");
        return FALSE;
    }
    return TRUE;
}
void create(int element)
{

    // node *head = malloc(sizeof(node));
    // node *temp = head;
    node *new_node = malloc(sizeof(node));

    if (check_mem_alloc(new_node))
    {
        printf("CREATE\n");
        new_node->data = element;
        new_node->next = NULL;
        new_node->prev = NULL;
        head = new_node;
    }
}

void insert_before(int element, int exist)
{
    node *new_node = malloc(sizeof(node));
    if (check_mem_alloc(new_node))
    {

        node *before, *current;
        for (before = NULL, current = head; current != NULL; before = current, current = current->next)
        {
            if (current->data == exist)
            {
                break;
            }
        }
        // new_node->prev = before;
        // new_node->next = current;
        // before->next = new_node;
        // current->prev = new_node;
        if (before == NULL)
        {
            new_node->prev = NULL;
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
        else
        {
            new_node->prev = before;
            new_node->next = current;
            before->next = new_node;
            current->prev = new_node;
        }
        new_node->data = element;
    }
}

void insert_after(int element, int exist)
{
    node *new_node = malloc(sizeof(node));

    if (check_mem_alloc(new_node))
    {
        node *cursor;

        for (cursor = head; cursor != NULL; cursor = cursor->next)
        {
            if (cursor->data == exist)
            {
                break;
            }
        }
        if (cursor != NULL)
        {
            new_node->prev = cursor;
            new_node->next = cursor->next;
            if (cursor->next != NULL)
            {
                cursor->next->prev = new_node;
            }
            cursor->next = new_node;
            new_node->data = element;
        }
        else
        {
            printf("Element %d is not present in the list\n", exist);
            free(new_node);
        }
    }
}

void insert_begin(int value)
{
    node *new_node = malloc(sizeof(node));
    if (check_mem_alloc(new_node))
    {
        printf("INSERT BEGIN\n");

        if (head != NULL)
        {
            new_node->next = head;
            head->prev = new_node;
            new_node->prev = NULL;
            new_node->data = value;
            head = new_node;
        }
    }
}

void insert_end(int value1)
{
    node *new_node = malloc(sizeof(node));
    if (check_mem_alloc(new_node))
    {
        node *cursor;
        printf("INSERT END\n");
        if (head != NULL)
        {
            for (cursor = head; cursor->next != NULL; cursor = cursor->next)
                ;

            new_node->prev = cursor;
            new_node->next = NULL;
            cursor->next = new_node;
            new_node->data = value1;
        }
    }
}

void delete_node(int element)
{
    node *prev = NULL, *current = head;
    node *temp = head;

    do
    {
        if (head->data == element)
        {
            current->next = temp;
            current = head;
            free(temp);
        } // TODO MANASWINI
        else if (current->data == element)
        {
            prev->next = current->next;
            free(current);
        }
        prev = current;
        current = current->next;

    } while (current != head);
}

void traverse()
{
    node *cursor;
    for (cursor = head; cursor != NULL; cursor = cursor->next)
    {
        printf("%d\n ", cursor->data);
    }
    printf("\n");
}

void delete_list()
{
    node *current, *temp = NULL;
    current = head;
    do
    {
        temp = current->next; // 0x100
        free(current);
        current = temp; //
    } while (current != head);
    head = NULL;
}

int main()
{
    create(20);
    insert_begin(10);
    insert_end(30);
    insert_before(40, 30);
    insert_before(70, 10);

    insert_after(50, 20);
    insert_after(60, 30);
    //insert_after(80, 90);
    insert_after(80, 60);

    traverse();
}