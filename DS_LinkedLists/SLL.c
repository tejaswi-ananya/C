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

    head = malloc(sizeof(node));
    if (check_mem_alloc(head))
    {
        head->data = element;
        head->next = NULL;
    }
}

void insert_begin(int value)
{
    node *new_node = malloc(sizeof(node));
    if (check_mem_alloc(new_node))
    {
        new_node->data = value;
        new_node->next = head;
        head = new_node;
    }
    // Check
}

void insert_end(int value1)
{
    node *new_node1 = malloc(sizeof(node));
    if (check_mem_alloc(new_node1))
    {
        node *cursor = head;
        for (; cursor->next != NULL; cursor = cursor->next)
            ;
        cursor->next = new_node1;
        new_node1->data = value1;
        new_node1->next = NULL;
    }
}

void insert_after(int element, int existing_element)
{
    node *new_node = malloc(sizeof(node));
    if (check_mem_alloc(new_node))
    {
        if (head->data == existing_element)
        {
            new_node->data = element;
            new_node->next = head;
            head = new_node;
            return;
        }

        node *current;
        for (current = head; current != NULL; current = current->next)
        {
            if (current->data == existing_element)
            {
                break;
            }
        }
        new_node->next = current->next;
        current->next = new_node;
        new_node->data = element;
        // OR

        return;
    }
}

void insert_before(int element, int existing_element)
{
    node *new_node = malloc(sizeof(node));
    if (check_mem_alloc(new_node))
    {
        if (head->data == existing_element)
        {
            new_node->data = element;
            new_node->next = head;
            head = new_node;
            return;
        }

        node *prev, *current;
        for (prev = NULL, current = head; current != NULL; prev = current, current = current->next)
        {
            if (current->data == existing_element)
            {
                break;
            }
        }
        prev->next = new_node;
        new_node->next = current;
        new_node->data = element;
        return;
        //(OR)
        // for(prev=NULL,current=head;current->data != existing_element; prev=current,current=current->next)
        // {
        //     // if(current->data == existing_element)
        //     // {
        //     //     break;
        //     // }
        // }
        // prev->next = new_node;
        // new_node->next = current;
        // new_node->data = element;
        // return
    }
}

void delete_node(int element)
{
    node *prev, *current;
    if (head->data == element)
    {
        printf("head node\n");

        node *temp = head;
        head = head->next;
        free(temp);
    }

    else
    {
        for (prev = NULL, current = head; current != NULL; prev = current, current = current->next)
        {
            if (current->next == NULL)
            {
                printf("Last node\n");
                if (current->data == element)
                {
                    prev->next = NULL;
                    break;
                }
            }
            else
            {
                if (current->data == element)
                {
                    printf("any node\n");

                    prev->next = current->next;
                    break;
                }
            }
            free(current);
        }
    }
}

void traverse()
{
    if(head == NULL)
    {
        printf("ALL NODES DELETED!!");
        return;
    }
    node *cursor = NULL;
    cursor = head;
    if (cursor->next == NULL)
    {
        printf("%d\n", cursor->data);
    }
    else
    {
        for (; cursor != NULL; cursor = cursor->next)
            printf("%d\n", cursor->data);
    }
}


void insert_before_multiple_instances(int element,int existing_element,int occurrence)
{
    node *new_node = malloc(sizeof(node));
    if (check_mem_alloc(new_node))
    {
        int count = 0;
        node *prev, *current;

        for (prev = NULL, current = head;current != NULL;prev = current, current = current->next)
        {
            if (current->data == existing_element)
            {
                count++;

                if (count == occurrence)
                {
                    break;     
                }
            }
        }

        if (current == NULL)  
        {
            free(new_node);
            return;
        }

        new_node->data = element;

        if (prev == NULL)     
        {
            new_node->next = head;
            head = new_node;
        }
        else
        {
            prev->next = new_node;
            new_node->next = current;
        }

        return;
    }

    free(new_node);
}


void delete_list()
{
    node *current,*temp;
    for (current = head; current != NULL;)
    {
            temp = current->next;
            free(current);
            current = temp;
    }
    head = NULL;
}

int main()
{
    create(10);
    // traverse();
    insert_begin(20);
    insert_begin(90);
    // traverse();
    insert_end(40);
    // traverse();
    insert_before(15, 40);
    // traverse();
    insert_before(15, 90);
    insert_after(180, 20);
    // delete_node(15);
    //   traverse();
    // delete_list();
    // traverse();
    insert_before_multiple_instances(12,15,2);
    traverse();
}