#include "sll.h"

int insert_at_last(Slist **head, data_t data)
{
    Slist *new;
    Slist *temp;

    // Allocate memory
    new = malloc(sizeof(Slist));

    if (new == NULL)
    {
        return FAILURE;
    }
    // Assigning data to new data
    new->data = data;

    // Connect nodes
    new->link = NULL;

    if (*head == NULL)
    {   // assigning new node to head
        *head = new; 
        return SUCCESS;
    }
    else
    {
        temp = *head;

        while (temp->link != NULL)
        {
            temp = temp->link;
        }

        temp->link = new;

        return SUCCESS;
    }
}