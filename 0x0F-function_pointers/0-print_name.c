#include "function_pointers.h"

/**
  * print_name - a function that prints a name
  * @name: The string to add
  * @f: a pointer to function
  *
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
