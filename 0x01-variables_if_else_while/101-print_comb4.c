#include <stdio.h>

/**
 * main - combinations
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j = -1;
	int count;
	int x = -1;
	int y = -1;
	int m;
	int k = -1;
	int u = 0;
	int v = 0;
	int w = 1;
	

	for (count = 0 ; count < 10 ; count++)
	{
		j = j + 1;
		for (i = 0 ; i < 10; i++)
		{
			x = x + 1;
			if (x == j)
				continue;
			if (x < 9)
			{
				for (m = 0 ; m < 10; m++)
				{		
					k = k + 1;

					if (j == k || x == k)
						continue;
					if (k <= 9)
					{
						putchar(j + '0');
						putchar(x + '0');
						putchar(k + '0');
						if (j == 7 && x == 8 && k == 9)
							break;
						putchar(',');
						putchar(' ');
					}

						
				}

				

			}
			
			v = v + 1;
			x = v;
			w = w + 1;
			k = w;



			

			

		}
		y = y + 1;

		x = y;
		u = u + 1;
		k = u;
	}
	putchar('\n');
	return (0);
}
