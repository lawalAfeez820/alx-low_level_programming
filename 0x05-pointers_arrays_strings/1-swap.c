#include "main.h"

/**
 * swap_int - change the position of two numbers
 *
 * @a: pointer variable of the first number
 * @b: pointer variable of the second number
 * Author: Lawal Afeez
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
