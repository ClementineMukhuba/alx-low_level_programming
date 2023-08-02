#include "lists.h"

/**
 * insert_nodeint_at_index – A function that inserts a new node
 * in a linked list at a given position.
 * @head: Pointer to the first node in a linked list.
 * @idx: Index where the new node is added
 * that starts at 0
 * @n: Data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 * if not possible do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *addnew;
	listint_t *temp = *head;

	addnew = malloc(sizeof(listint_t));
	if (!addnew || !head)
		return (NULL);

	addnew->n = n;
	addnew->next = NULL;

	if (idx == 0)
	{
		addnew->next = *head;
		*head = addnew;
		return (addnew);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			addnew->next = temp->next;
			temp->next = addnew;
			return (addnew);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

