#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
    Slist *new;

    // Allocate memory
    new = malloc(sizeof(Slist));

    if (new == NULL)
    {
        return FAILURE;
    }
    // Assign data to new node
    new->data = data;

    // Connect nodes
    new->link = *head;

    *head = new;

    return SUCCESS;
}