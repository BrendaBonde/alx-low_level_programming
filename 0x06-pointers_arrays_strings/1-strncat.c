#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c1 = 0, c2 = 0;

	while (*(dst + C1) != '\0')
	{
		C1++;
	}

	WHILE (C2 < n)
	{
		*(dest + c1) = *(src + c2);
		if (*(src + c2) == '\0')
			break;
		c1++;
		c2++;
	}
	return (dest);
}