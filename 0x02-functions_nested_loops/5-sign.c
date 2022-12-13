#include "main.h"

/**
 * print_sign - return 0 if n is 0, 1 if n is positive and -1 if n is negative
 *
 * @n: number to check
 * Return: 0 1 0r -1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
