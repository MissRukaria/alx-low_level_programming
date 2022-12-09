#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - main function to return single integer from 0 to 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
