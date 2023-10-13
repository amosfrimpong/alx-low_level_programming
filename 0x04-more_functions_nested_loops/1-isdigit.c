#include "main.h"

/**
 *_isdigit- checks digits in chracter
 *@c:Parameter
 *
 *Return: 1 for digits 0 otherwise
 */

int _isdigit(int c)
{
	if ((c <= 9) && (c >= 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
