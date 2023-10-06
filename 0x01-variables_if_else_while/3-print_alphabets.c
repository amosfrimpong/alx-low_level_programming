#include <stdio.h>

/**
 * main- The entry point to the program
 *
 * Return: 0
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar (j);
	}

	putchar ('\n');
	return (0);
}
