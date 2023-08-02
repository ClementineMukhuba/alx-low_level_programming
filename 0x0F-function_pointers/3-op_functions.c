#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - Sum of two numbers
  * @a: Number one
  * @b: Number two
  *
  * Return: the sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - The diffrerence between two numbers
  * @a: Number one
  * @b: Number two
  *
  * Return: the diffrence between a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns the product of a and b
  * @a: number one
  * @b: number two
  *
  * Return: the product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
  * op_div - returns the result of the division of a by b
  * @a: number one
  * @b: number two
  *
  * Return: division result of a and b
  */
int op_div(int a, int b)
	{
	return (a / b);
}


/**
  * op_mod -  returns the remainder of the division of a by b
  * @a: number one
  * @b: number two
  *
  * Return: remainder of the division
  */
int op_mod(int a, int b)
	{
	return (a % b);
}

