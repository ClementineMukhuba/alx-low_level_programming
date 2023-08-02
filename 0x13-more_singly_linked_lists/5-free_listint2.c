#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: An indicator to listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *freelist;

	if (head == NULL)
		return;

	while (*head)
	{
		freelist = (*head)->next;
		free(*head);
		*head = freelist;
	}

	*head = NULL;
}
