#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return: Nothing
 */

void prints_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchat('\n');
}
