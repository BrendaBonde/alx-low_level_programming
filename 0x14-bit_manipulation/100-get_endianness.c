#include "main.h"
/**
 * get_endianness - determines whether big or little
 * Return: 0 if big, 1 is little
 */
int get_endianness(void)
{
	unsigned int i = 0x76543210;
	char *c = (char *) &1;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
