#include <stdio.h>
/**
 * main - lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(lower[i]);
	putchar('\n');
	return (0);
}
