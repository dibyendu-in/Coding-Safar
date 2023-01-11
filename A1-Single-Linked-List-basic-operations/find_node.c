#include "sll.h"

int find_node(Slist *head, data_t data)
{
    Slist *temp;

    int count = 1;

    if(head == NULL)
    {
        return FAILURE;
    }

    temp = head; // assigning the head to temp

   // checking untill end of the node
    while(temp != NULL) 
    {
        if(temp->data == data)
        {
            return count; // passing the count value to main function
        }
        else
        {
            temp = temp->link;
            count++;
        }
    }	
    return FAILURE;
}
