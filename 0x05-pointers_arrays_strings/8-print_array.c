#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: pointer to an int
 * @n: start
 */

void print_array(nt *a, int n)
{
	int x = 0;

	for (n--; n >= 0; n--, x++)
	{
		printf("%d, *(a + x));
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
