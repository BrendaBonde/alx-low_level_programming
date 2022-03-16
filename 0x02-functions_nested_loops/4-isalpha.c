#include "main.h"

/**
 * _isalpha - checks if characters is alphabetical
 * @c: ascii character
 *
 * Return: 1 if it is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
