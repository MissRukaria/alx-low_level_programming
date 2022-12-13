#include "main.h"

/**
 * _islower - Checks character if lowercase and returns 1 if YES
 * otherwise returns 0
 * @c: Isthe int value that is compared with the ASCII value
 * Return: 0 if successful. _islower - Entry point
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
