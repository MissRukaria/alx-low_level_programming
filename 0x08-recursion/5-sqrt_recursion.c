#include "main.h"

/**
 * helper - finds the root of two numbers
 * @a: The number
 * @b: The number testing the root of @a
 * Return: square root
 */

int helper(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (helper(a, b + 1));
	return (1);
}
/**
 * _sqrt_recursion - returns natural squareroot of a number
 * @n: Number to return squareroot of
 * Return: square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
