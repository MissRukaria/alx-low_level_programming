#include <stdio.h>
#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: The number of bytes to concatnates
 * Return: pointer to the designated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';
	return (dest);
}
