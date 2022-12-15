#include "main.h"

/**
 * _isdigit - checks for digits from 0 through to 9
 * @c: parameter
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
