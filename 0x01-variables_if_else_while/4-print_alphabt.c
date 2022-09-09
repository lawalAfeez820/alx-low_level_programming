#include <stdio.h>

/** 
 * main - lowercase alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char alpha[26] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
