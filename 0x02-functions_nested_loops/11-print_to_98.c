#include "main.h"

/**
 * print_to_98 - prints natural numbers
 * @i: number to start from
 *
 * Return: 0
 */
void print_to_98(int i)
{
	if (i > 98)
	{
		for (; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (i < 98)
	{
		for (; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", n);
}
