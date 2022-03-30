#incude "main.h"
/**
 * _puts_recursion - prints a string, followed by new line
 * @s: characters
 * Return: nothing
 */

void _puts_recursions(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
	else
		_putchar('\n');
}
