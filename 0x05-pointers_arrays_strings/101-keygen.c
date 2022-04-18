#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for the program 101-
 * crackme
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
srand(time(NULL));
char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&^*()";
char password[14];
for (i = 0; i < 14; i++)
{
password[i] = characters[rand() % strlen(characters)];
printf("%c", password[i]);
}
return (0);
}
