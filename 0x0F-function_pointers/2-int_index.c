#include "function_pointers.h"

/**
  * int_index - Function that searches for an integer.
  * @array: An array
  * @size: number of elements in an array
  * @cmp: is a pointer to the function for comparison of values
  *
  * Return: 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
