#include <stdio.h>

/**
 * main- The entry point to the program
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar ('0'+i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar ('\n');
	return (0);
}
