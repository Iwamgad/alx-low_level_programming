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
int digit4;
int dig1;
int dig2;
for (digit1 = 0; digit1 <= 9; digit1++)
{
for (digit2 = 0; digit2 < 9; digit2++)
{
for (digit3 = 0; digit3 <= 9; digit3++)
{
for (digit4 = 1; digit4 <= 9; digit4++)
{
dig1 = (10 * digit1) + digit2;
dig2 = (10 * digit3) + digit4;
if (dig1 < dig2)
{
putchar(digit1 + 48);
putchar(digit2 + 48);
putchar(' ');
putchar(digit3 + 48);
putchar(digit4 + 48);
if (digit1 != 7 || digit2 != 8 || digit3 != 9 || digit4 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
