#include <stdio.h>
#include "main.h"

/**
 *print_alphabet- A Program to Print Alphabet in lowercase
 *
 *Return: Nothing
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
