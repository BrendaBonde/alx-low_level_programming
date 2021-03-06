#include <stdlib.h>
#include "functions_pointers.h"

/**
 * print_name - prints the name of a function
 * @name: name of person
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
