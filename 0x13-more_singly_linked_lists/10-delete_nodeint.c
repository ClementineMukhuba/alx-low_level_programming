#include "lists.h"

/**
 * delete_nodeint_at_index – A function that deletes.
 * the node at index of a linked list.
 * @head: Pointer to the first element in a linked list.
 * @index: Index of the node to delete
 * starts at 0
 *
 * Return: 1 if (Success), or -1 if (Fails)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *present = NULL;
	unsigned int i = 0;

	if (*head == NULL)

		return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(temp);

	return (1);
	}

	while (i < index - 1)
	{
	if (!temp || !(temp->next))
	return (-1);
	temp = temp->next;
	i++;
	}


	present = temp->next;
	temp->next = present->next;
	free(present);

	return (1);
}

