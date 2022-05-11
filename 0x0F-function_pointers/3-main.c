#include "3-calc.h"

/**
 *main - puts argument operation results
 *@argc: argument count
 *@argv: argument array
 *Return: returns error if number of arguments is wrong
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0, retResult = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	retResult = (get_op_func(argv[2]))(a, b);
	printf("%d\n", retResult);

	return (0);
}