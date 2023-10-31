#include "main.h"

/**
 *rev_string - Reverse the string
 *@s: paerameter
 *Return: reverse;
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int l = 0;
	int i = 0;

	while (s[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
	{
		l--;
		reverse = s[i];
		s[i] = s[l];
		s[l] = reverse;
	}
}

