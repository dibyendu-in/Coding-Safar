#include "sll.h"

void print_list(Slist *head)
{
	if (head == NULL) // checking list is empty or not
	{
		printf("INFO : List is empty\n");
	}
    else
    {
	    while (head)		
	    {   // printing the nodes
		    printf("%d -> ", head -> data);
		    head = head -> link;
	    }

	    printf("NULL\n");
    }
}