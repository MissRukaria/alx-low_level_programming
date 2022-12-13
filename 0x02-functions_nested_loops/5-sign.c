#include "main.h"

/**
 * _sign - return 0 if n is 0, 1 if n is positive and -1 if n is negative
 *
 * @n: number to check
 * Return: 0 1 0r -1
 *
 */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test - -1;
		_putchar('-');
	}
	return (test);
}
