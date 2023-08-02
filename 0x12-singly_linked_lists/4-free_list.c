#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_list – A function that frees list_t .
  * @head: an indicator to the first node of linked list to be freed.
  *
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

