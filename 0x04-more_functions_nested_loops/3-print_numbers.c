#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int i;
	char numbers[] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		_putchar(numbers[i]);
	}

	_putchar('\n');
}
