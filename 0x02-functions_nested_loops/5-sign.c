#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: takes in a number
 * Return: 1 for a positive number, 0 for a zero number and -1 for a negative number
 */
int print_sign(int n)
{
if (n > 1)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
