#include "main.h"

/**
 * print_line - prints a straight line in a terminal
 * @n: parameter
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
