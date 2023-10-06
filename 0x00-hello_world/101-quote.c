#include <unistd.h>

/**
 * main- the program use write system call function to
 * print a message to the standard error
 *
 * Return: the program return (1) indicate an error
 *
 */

int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19",59);
	return (1);
}
