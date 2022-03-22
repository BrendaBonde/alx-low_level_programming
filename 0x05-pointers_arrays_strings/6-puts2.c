#include "main.h"

/**
 * puts2 - takes string input as a parameter
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (counter % 2 == 0)
			_putchar(str[counter]);
		counter++;
	}
}
