#include "main.h"
#include <string.h>
int _pow(int i);

/**
 * binary_to_uint -  convert numeric string of 0's and 1's to decimal.
 * @b: string to convert
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = 0, z, j, k, i;

	if (b == NULL)
		return (0);
	j = strlen(b) - 1;

	for (i = j, z = 0; i >= 0; i--, z++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			k = b[i] - 48;
			sum = sum + ((k * _pow(z)));
		}
		else
			return (0);
	}
	return (sum);



}

/**
 * _pow - power of 2
 *@i: value
 * Return: int
 */
int _pow(int i)
{
	if (i == 0)
		return (1);
	return (2 * _pow(i - 1));
}
