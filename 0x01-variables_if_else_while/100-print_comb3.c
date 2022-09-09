#include <stdio.h>

/**
 * main - combinations
 *
 * Return: always 0
 */
int main()
{
	int i;
	int j = -1;
	int count;
	int x = -1;
	int y = -1;

	for (count = 0 ; count < 10 ; count++)
	{
		j = j + 1;
		for (i= 0 ; i < 10; i++)
		{
			
			x = x + 1;

			if (x == j)
				continue;
			if (x <= 9 )
			{
				putchar(j + '0');
				putchar(x + '0');
				if (j == 8 && x == 9)
					break;
				putchar(',');
				putchar(' ');
			}

		}
		y = y + 1;

		x = y;
	}
	putchar('\n');
	return (0);
}
