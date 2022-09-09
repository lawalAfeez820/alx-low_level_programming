#include <stdio.h>

/**
 * main - reversing alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	char j;

	for (i = 25; i >= 0; i--)
	{
		j = alpha[i];
		putchar(j);
	}
	putchar('\n');
	return (0);
}
