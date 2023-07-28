#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * list_len - Display number of elements of a linked  list
  * @h: The name of a linked list
  * Return: The number of nodes.
  */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}


