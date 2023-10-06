#include <stdio.h>

/**
 *main- the entry point of the program
 *
 *Returns: Returns 0 on Sucess
  */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar (i);
	}
	putchar('\n');

	return (0);
}
