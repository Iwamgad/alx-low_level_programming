#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum of positive numbers, followed by a new line
 * @argc: takes in an integer
 * @argv: takes in a string
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, isDigit = 1;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			isDigit = 1;
			if (isdigit(*argv[i]) == 0)
			{
				isDigit = 0;
				break;
			}
		}
		if (isDigit == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{

			for (i = 1; i < argc; i++)
			{
				sum += atoi(argv[i]);
			}
			printf("%d\n", sum);
		}
	}
	return (0);
}
