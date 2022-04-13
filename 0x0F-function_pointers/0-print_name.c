#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - calls back a function
 * @name: name of person
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
