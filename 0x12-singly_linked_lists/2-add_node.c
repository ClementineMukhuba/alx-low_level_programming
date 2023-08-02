#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
  * _strlen – Is a function to return the length of a string.
  * @s:  is a character.
  *
  * Return: The length of string
  */

int _strlen(const char *s)

{
	int c = 0;

 while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

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

	addnew = malloc(sizeof(list_t));
	if (addnew == NULL)
		return (NULL);

	addnew->str = strdup(str);
	addnew->len = _strlen(str);
	addnew->next = (*head);
	(*head) = addnew;

	return (addnew);
}
