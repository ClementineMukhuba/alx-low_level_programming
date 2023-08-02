#include "lists.h"

/**
 * free_listint – A function that frees a listint_t
 * @head: an indicator to the first node of linked list to be freed
 *
 */

void free_listint(listint_t *head)
{
	listint_t *freelist;

	while ((freelist = head) != NULL)
	{

	head = head->next;
	free(freelist);

	}
}

