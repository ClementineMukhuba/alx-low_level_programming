#include "lists.h"

/**
 *find_listint_loop – A function to find the loop
 * in a linked list.
 *@head: head of the linked list to search in
 *
 *Return: The address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{

	listint_t *head1;

	listint_t *head2;

	head1 = head;
	head2 = head;

	if (!head)
	return (NULL);

	while (head1 && head2 && head2->next)
	{
		head2 = head2->next->next;
		head1 = head1->next;

		if (head2 == head1)
		{
		head1 = head;
	while (head1 != head2)

	{
	head1 = head1->next;
	head2 = head2->next;
			}
		return (head2);
		}

	}

	return (NULL);
}

