#include <stdio.h>

/**
 * main- Print the size of Data Types
 *
 * Return: return 0 on Success
 */

int main(void)
{
	char ch;
	int num;
	long lnum;
	long long int llnum;
	float f;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(ch));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(num));
	printf("Size of a long: %d byte(s)\n",(int)sizeof(lnum));
	printf("Size of a long long int: %d byte(s)\n",(int)sizeof(llnum));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(f));

	return (0);
}
