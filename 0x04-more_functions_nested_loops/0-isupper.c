#include "main.h"

/**
 * _isupper- Checks Uppercase letter
 *@c: Parameter to check uppercase
 *
 * Return: 1 for uppercase, 0 for otherwise
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
