#include "main.h"
/**
 * get_ endianness - determines whether big or little
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 0x7643210;
	char *c = (char *) &i;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
