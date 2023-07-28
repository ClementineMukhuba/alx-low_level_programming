#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
  * _strlen – Is a function to return the length of a string.
  * @s:  Length required string
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
  * add_node_end - Adds a new node at send of a linked list 
  * @head: The head of list_t linked list
  * @str: The string to add into node.
  *
  * Return: the address of the new element, or NULL should if fail.
  */

list_t *add_node_end(list_t **head, const char *str)
{
        list_t *addnew;
        list_t *temp = *head;

		addnew = malloc(sizeof(list_t));
		
		if (addnew == NULL)
        return (NULL);

        addnew->str = strdup(str);
        addnew->len = _strlen(str);
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

