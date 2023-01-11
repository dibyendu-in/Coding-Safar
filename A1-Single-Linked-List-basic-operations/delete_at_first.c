#include "sll.h"

int sl_delete_first(Slist **head)
{
    if (*head != NULL) // checking head NULL or not
    {
        // deleting at the first
        *head = (*head)->link;
        return SUCCESS;
    }
    else
        return FAILURE;
}