#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
* add_node - Adds a new node at start of a linked list
  * @head: The head of list_t linked list
  * @str: The string to add into node.
  *
  * Return: the address of the new element, or NULL should it fail.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *addnew;

	unsigned int len = 0

		while (str[len])
		len++;
	addnew = malloc(sizeof(list_t));
	if (!addnew)
		return (NULL);

	addnew->str = strdup(str);
	addnew->len = len;
	addnew->next = (*head);
	(*head) = addnew;

	return (head);
}

