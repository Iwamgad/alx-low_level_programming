#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars
 *         in the string b that is not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int retNum = 0, num, count = 0, k = 1;
	const char *numChar = b;

	if (b == NULL)
		return (0);

	while (*numChar)
	{
		if (*numChar != '0' && *numChar != '1')
			return (0);
		count++;
		numChar++;
	}

	while (count > 0)
	{
		num = b[count - 1] - 48;
		num = num * k;
		retNum = retNum + num;
		k *= 2;
		count--;
	}
	return (retNum);
}
