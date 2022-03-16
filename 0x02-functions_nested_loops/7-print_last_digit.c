#include "main.h"

/**
 * print_Last_digit - prints Last digit
 *
 * @i: digit to be tested
 *
 * Return: Value of the digit
 */
int print_Last_digit(int i)
{
	int m;

	m = i % 10;
	if (m < 0)
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
