#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to return alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

