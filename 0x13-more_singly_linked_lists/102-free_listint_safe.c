#include "lists.h"

/**
 * free_listint2_safe - Frees a linked list
 * @head: A head of listint_t_safe list to be freed
 */

void free_listint2_safe(listint_t **head)
{
	listint_t *freelist;
	listint_t *present;

	if (head != NULL)
	{
		present = *head;
		while ((freelist = present) != NULL)
		{
			present = present->next;
			free(freelist);
		}
		*head = NULL;
	}
}


/**
 * size_t free_listint_safe - Frees a linked list
 * @h: Head of listint_t list to be freed
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;
	int varience;

		if (!h || !*h)
		return (0);

		while (*h)
	{
		varience = *h - (*h)->next;
	if (varience > 0)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	len++;
	}
	else
	{
	free(*h);
	*h = NULL;
	len++;
	break;

		}
	}

	*h = NULL;

	return (len);
}

