#include <stdio.h>
#include "main.h"


/**
 * void: Print Alphabet
 *
 * Return: Nothing
 *
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar ('\n');
}
