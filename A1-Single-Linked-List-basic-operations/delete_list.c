#include "sll.h"

int sl_delete_list(Slist **head)
{
    if (*head != NULL) // checking head NULL or not
    {
        // deleting the complete list
        while (*head != NULL)
        {
            *head = (*head)->link;
        }
        return SUCCESS;
    }
    else
    {
        return FAILURE;
    }
}