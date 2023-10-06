#include <stdio.h>

/**
 * main- the entry point of the program
 *
 * Return: 0 on Success
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)

	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i != j && i != k && j != k && i < j && i < k && j < k)
				{
				 putchar ('0' + i);
				 putchar ('0' + j);
				 putchar ('0' + k);

				if (i != 7 && j != 8 && k != 9)
				{
				putchar (',');
				putchar (' ');
				}
				}
			}
		}
	}
				return (0);
}
