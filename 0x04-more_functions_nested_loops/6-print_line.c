#include "main.h"

/**
 *print_line- Print a straight line
 *@n: Para
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
