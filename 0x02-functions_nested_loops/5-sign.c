#include <stdio.h>
#include "main.h"

/**
 *print_sign: print the sign of a Number
 *
 *@n: Parameter
 *Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
