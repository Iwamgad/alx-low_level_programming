#include "hash_tables.h"
/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: string used to generate hashV value
 * Return: hashV value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashV;
	int c;

	hashV = 5381;
	while ((c = *str++))
	{
		hashV = ((hashV << 5) + hashV) + c; /* hashV * 33 + c */
	}
	return (hashV);
}
