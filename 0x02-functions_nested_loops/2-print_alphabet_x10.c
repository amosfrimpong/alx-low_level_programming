#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10- A Program to Print Alphabet in lowercase
 *
 *Return: Nothing
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		putchar(ch);
		}

	putchar ('\n');
	}

}
