#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end of a linked list
 * @head: The head of listint_t linked list.
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnew;
	listint_t *temp = *head;

	addnew = malloc(sizeof(listint_t));
	if (!addnew)
		return (NULL);

	addnew->n = n;
	addnew->next = NULL;

	if (*head == NULL)
	{
		*head = addnew;
		return (addnew);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = addnew;

	return (addnew);
}

