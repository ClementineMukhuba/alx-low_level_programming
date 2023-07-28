#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
  * print_list - Prints all elements of linked lists
  * @h: The name of a linked list
  * Return: The number of nodes. 
  */
size_t print_list(const list_t *h)
{
	int count = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
				
	h = h->next;
	count ++;
	}
	return (count);
}


