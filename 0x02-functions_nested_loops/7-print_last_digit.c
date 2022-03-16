#include "main.h"

/**
 * print_Last_digit - prints last digit
 *
 * @i: digit to be tested
 *
 * Return: value of the digit
 */
int print_Last_digit(int i)
{
	int m;

	m = i % 10;
	if (m < 10)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
