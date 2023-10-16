#include "main.h"

/**
 *swap_int- swapping two numbers
 *@a: parameter
 *@b: Parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
