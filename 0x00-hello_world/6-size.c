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

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", sizeof(num));
	printf("Size of a long: %lu byte(s)\n", sizeof(lnum));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llnum));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
