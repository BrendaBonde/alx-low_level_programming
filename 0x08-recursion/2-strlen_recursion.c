#include "main.h"
/**
 * _strlen_recursion - finds length of a string
 * @s: length of string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursions(s + 1) + 1);
}
