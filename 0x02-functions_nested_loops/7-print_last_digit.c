#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: takes in a number
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
int rem = (n > 0) ?  n % 10 : (-n) % 10;
_putchar (rem + '0');
return (rem);
}
