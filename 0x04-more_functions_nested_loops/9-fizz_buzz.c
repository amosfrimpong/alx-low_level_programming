#include "main.h"
#include <stdio.h>

void fizzBuzz(void);

/**
 * fizzBuzz- print
 */
void fizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}


/**
 * main- entry point
 * Return: 0
 */
int main(void)
{
	fizzBuzz();

	return (0);
}
