#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * followed by new line
 */

void print_alphabet_x10(void)
{
	char ab;
	int ac;

	ac = 0;

	while (ac < 10)
	{
		ab = 'a';

		while (ab <= 'z')
		{
			_putchar('\n');
			ac++;
		}
	}
}
