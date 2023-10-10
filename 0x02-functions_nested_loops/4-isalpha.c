#include <stdio.h>
#include "main.h"

/**
 * _isalpha- Check for alphabetical character
 *@c: Parameter
 *
 * Return: 1 for alphabet and 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
