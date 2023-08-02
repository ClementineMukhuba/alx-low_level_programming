#include "lists.h"

/**
 * sum_listint – Calculation of the sum of all the data
 * in a listint_t linked list.
 * @head: The first node of the linked list
 *
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}

	return (sum);
}

