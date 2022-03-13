#include <stdio.h>

/**
 * main - prints 3-digit combinations
 *
 * Return: Always 0
 */
int main(void)
{
	int p = 48;
	int i = 48;
	int e = 48;

	while (p < 58)
	{
		i = 48;
		e = 48;
		while (i < 58)
		{
			e = 48;
			while (e < 58)
			{
				if (p != i && p !=e && e !=i && p < e && p < i && i < e)
				{
					putchar(p);
					putchar(i);
					putchar(e);
					if (p == 55 && i == 56 && e == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				e++;
			}
			i++;
		}
		p++;
	}
	putchar('\n');
	return (0);
}
