#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip to
 *             get from one number to another
 * @n: takes in an unsigned long integer
 * @m: takes in an unsigned long integer
 * Return: the number of bits you would need to flip to
 *         get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int recent = n ^ m;

	while (recent)
	{
		count++;
		recent &= (recent - 1);
	}

	return (count);
}
