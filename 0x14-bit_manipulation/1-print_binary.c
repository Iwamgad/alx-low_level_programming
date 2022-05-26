#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: takes in an unsigned long integer
 * Return: returns nothing
 */

void print_binary(unsigned long int n)
{
	int i = 0, count = 0;
	unsigned long int var;

	if (n == 0)
		_putchar('0');

	for (i = 10; i >= 0; i--)
	{
		var = n >> i;

		if (var & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
}
