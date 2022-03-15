#include "main.h"

/**
 *  _islower - checks lowercase characters
 *@c: Ascii code character
 *
 *  Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
