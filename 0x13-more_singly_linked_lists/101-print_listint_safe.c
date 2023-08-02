#include "lists.h"
#include <stdio.h>


size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of nodes
 * of a looped listint_t linked list.
 * @head: head of the listint_t to verify
 *
 * Return:0 If no looping in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t*head1, *head2;
	size_t nodes = 1;

	if (head == NULL)
		return (0);
	if (head->next == NULL)
		return (0);

	head1 = head->next;
	head2 = (head->next)->next;

	while (head2)
	{
		if (head1 == head2)
		{
			head1 = head;
			while (head1 != head2)
			{
				nodes++;
				head1 = head1->next;
				head2 = head2->next;
			}

			head1 = head1->next;
			while (head1 != head2)
			{
				nodes++;
				head1 = head1->next;
			}

			return (nodes);
		}

		head1 = head2->next;
		head2 = (head2->next)->next;
	}

	return (0);


/**
 * print_listint_safe - Prints a linked list listint_t list in safely
 * @head: An indicator of the head of
 * listint_t linked list
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t prntnodes, index = 0;

	prntnodes = looped_listint_len(head);

	if (prntnodes == 0)
	{
	for (; head != NULL; prntnodes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
        }
	}

	else
	{
		for (index = 0; index < prntnodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;

	}
	printf("-> [%p] %d\n", (void *)head, head->n);

	}
	return(nodes);
}
