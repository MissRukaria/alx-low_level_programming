#include "main.h"

/**
 * _strlen_recursion - returns te length of  string
 * @s: te string to check the length
 * Return: an int showing string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
