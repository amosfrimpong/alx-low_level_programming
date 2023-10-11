#include "main.h"
#include <stdio.h>

/**
 *times_table- Print 9 times table
 *
 *Return: Nothing
 *
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		int z = i * j;

			if (z <= 9)
			{
				if (j == 9)
				{
					printf(" %d", z);
				}
				else
				{
					printf(" %d, ", z);
				}
			}
			else
			{
				if (j == 9)
				{
					printf("%d", z);
				}
				else
				{
					printf("%d, ", z);
				}
			}
		}
		putchar('\n');
	}
}
