#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number to 98
 *
 * @n: number to be input by the user
 */

void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= n; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n, ", a);
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= n; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d, ", b);
		}
	}
}
