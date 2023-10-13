#include "main.h"

/**
 * main- Diagonal
 * @n: Parameter
 */





void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
	int j;
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

	}
}
