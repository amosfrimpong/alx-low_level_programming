#include <stdio.h>

/**
 * main- the entery point
 *
 * Return: 0 on Success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int k;
			int l;

			for (k = 0; k <= 9; k++)
			{
				for (l = 1; l <= 9; l++)
				{
					putchar ('0' + i);
					putchar ('0' + j);
					putchar (' ');

					putchar ('0' + k);
					putchar ('0' + l);
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	return (0);
}
