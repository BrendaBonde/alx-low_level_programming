#include "main.h"
/**
 * get_ endianness - determines whether big or little
 * Return: 0 if big, 1 if little
 */
int get_endianness - determines whether big or little
{
	unsigned int i = 0x76543210;
	char *c = (char *) &i;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
