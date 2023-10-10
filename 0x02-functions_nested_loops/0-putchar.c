#include <stdio.h>

/**
 * main- Print _putchar
 *
 * Return: 0
 *
 */

int main(void)
{
	char name[] = "_putchar";
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		putchar(name[i]);

	}

	putchar('\n');

	return (0);
}
