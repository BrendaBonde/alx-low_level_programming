#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array: the array
 * @size: array size
 * @cmp: pointer to comparison function
 * Return: the index of the matching element
 * or -1 if no match or if size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
