#include <stdio.h>
#include "main.h"

/**
 *_abs-Print the absolute value of a number
 *@n: Parameter
 * Return: n
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
