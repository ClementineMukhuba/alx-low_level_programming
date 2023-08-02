#include "lists.h"

/**
 * add_nodeint - adds a new node at start of a linked list
 * @head: The head of listint_t linked list.
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL should it fail.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnew;

	addnew = malloc(sizeof(listint_t));
	if (addnew == NULL)
	return (NULL);

	addnew->n = n;
	addnew->next = *head;
	(*head) = addnew;

	return (addnew);
}

