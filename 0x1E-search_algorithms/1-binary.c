#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using
 *                 the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
 *         It returns -1 If value is not present in array or
 *         if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int) (size - 1), mid, i = l, j = r;

	if (array == NULL)
		return (-1);

	while (l < r)
	{
		mid = (l + r) / 2;

		i = l;
		j = r;

		printf("Searching in array: ");

		while (i <= j)
		{
			if (i < j)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
			i++;
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
		if (l >= r)
			printf("Searching in array: %d\n", array[r]);
	}

	return (-1);
}
