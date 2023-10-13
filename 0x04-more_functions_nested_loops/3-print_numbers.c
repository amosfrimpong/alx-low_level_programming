#include "main.h"

/**
 *print_numbers: priunt Numbers
 *
 *Return: Nothing
 *
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
