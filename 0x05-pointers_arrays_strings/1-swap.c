#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: first value to be input
 * @b: second valueto be inpput
 * int c: The swaped value to be output
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
