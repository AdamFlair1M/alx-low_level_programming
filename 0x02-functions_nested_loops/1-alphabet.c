#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 *
 * Description: This function prints all the lowercase letters of the
 * alphabet in ascending order, from 'a' to 'z', followed by a new line.
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}

	_putchar('\n');
}
