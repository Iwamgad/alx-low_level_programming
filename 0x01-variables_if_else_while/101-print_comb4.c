#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1;
int digit2;
int digit3;
for (digit1 = 0; digit1 < 8; digit1++)
{
for (digit2 = 1; digit2 < 9; digit2++)
{
for (digit3 = 2; digit3 <= 9; digit3++)
{
if (digit1 < digit2 && digit2 < digit3 && digit1 != digit2 && digit2 != digit3)
{
putchar(digit1 + 48);
putchar(digit2 + 48);
putchar(digit3 + 48);
if (digit1 != 7 || digit2 != 8 || digit3 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
