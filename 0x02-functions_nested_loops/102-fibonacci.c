#include <stdio.h>

/**
 * main - prints the sum of fibonacci numbers
 *
 * Return: 0
 */int main(void)
{
	int a;
	long int num1, num2, fn;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (a = 0; a < 48; a++)
	{
		fn + num1 + num2;
		printf(", %ld", fn);
		num1 = num2;
		num2 = fn;
	}
	print("\n");
	return (0);
}
