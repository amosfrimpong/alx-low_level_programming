#include "main.h"

/**
 *_strlen- Count the lenth a string
 *@s: a pointer to a string
 *Return: i, that is the count, the number of time run through the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}


	return (i);
}
