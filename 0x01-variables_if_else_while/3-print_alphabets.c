#include <stdio.h>

/**
 * main - upper and lower
 *
 * Return: always 0
 */
int main(void)
{
	char uplo[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
		putchar(uplo[i]);
	putchar('\n');
	return (0);
}
