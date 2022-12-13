#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @n: The int to be checked
 *
 * Return: returns an unsigned int value to calling function
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else
	{
		n *= -1;
		return (n);
	}
}

