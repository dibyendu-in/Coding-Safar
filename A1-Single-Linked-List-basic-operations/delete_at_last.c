#include "sll.h"

int sl_delete_last(Slist **head)
{
    if (*head == NULL) // checking head is NULL or not
    {
        return FAILURE;
    }
    else
    {
        // assigning head to the temp
        Slist *temp = *head;

        if (temp->link != NULL)
        {
            // deleting at the last
            while (temp->link->link != NULL)
            {
                temp = temp->link;
            }
            // free the node
            free(temp->link);
            temp->link = NULL;
            return SUCCESS;
        }
        else
        {
            // free the temp
            free(temp);
            *head = NULL;
            return SUCCESS;
        }
    }
}