#include <stdio.h>
#include "main.h"

/**
 *_islower- Check for Lowercase in input
 *
 *@c:Parameter for argument
 *
 *Return: 1 for lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
