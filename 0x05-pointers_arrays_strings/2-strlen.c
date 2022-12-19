#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that prints the length of a string
 * @s: String to be input
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
