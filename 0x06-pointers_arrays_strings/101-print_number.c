#include "main.h"

/**
 * print_number - prints an integer
 * @n: takes in an integer
 * Return: returns nothing
 */
void print_number(int n)
{
unsigned int num = (n <= 0) ? -1 * n : n;
unsigned int rev = 0, lastdigit = 0;
if (n == 0)
{
_putchar('0');
}
else
{
while (num != 0)
{
lastdigit = num % 10;
rev = (rev * 10) + lastdigit;
num = num / 10;
}
if (n < 0)
_putchar('-');
while (rev != 0)
{
lastdigit = rev % 10;
_putchar(lastdigit + '0');
rev = rev / 10;
}
}
}
