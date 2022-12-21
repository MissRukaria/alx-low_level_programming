#include <unistd.h>

/**
 * _putchar - writes thecharacter c to stdout
 * @c: Character to be printed
 *
 * Return: 1 on success
 * On error, -1 and errno is set 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
