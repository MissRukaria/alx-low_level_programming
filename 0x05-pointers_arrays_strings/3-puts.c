#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string followed by a a new line
 * @str: pointer value
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\o')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
