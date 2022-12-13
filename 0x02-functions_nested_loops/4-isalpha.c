#incude "main.h"

/**
 * _isalpha - Checks if c is a letter whether lowr or uppercase and returns 1
 * @c: The int value to  be compared to the ASCII value
 * Otherwise return 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
