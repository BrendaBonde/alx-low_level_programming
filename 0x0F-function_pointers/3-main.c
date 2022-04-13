#include "3-calc.h"

/**
 * main - calls the calculator operations
 * @argc: arguement counter
 * @argv: arguement store
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operatio)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	n = atoi(argv[3]);

	printf("%d\n", operation(a, b));
	return (0);
}
