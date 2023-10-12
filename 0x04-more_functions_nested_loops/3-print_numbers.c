#include "main.h"

/**
 * print_numbers - func checks for checks for a digit (0 throuh 9).
 *
 * Return: The number since 0 up to 9
 */
void Print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + 'x');
	}
	_putchar('\n');
}
