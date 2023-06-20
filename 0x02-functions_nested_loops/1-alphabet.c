#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print all alphabets in lowercase
 */


void print_alphabet(void)
{
	char latter;

	for (letter = 'a'; latter <= 'z'; letter++)
		_putchar(latter);

	_putchar('\n');
}

