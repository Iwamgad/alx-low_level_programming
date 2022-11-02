#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers using
 *                 the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
 *         It returns -1 If value is not present in array or
 *         if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int start = 0, end = sqrt(size), i = start;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", i, array[i]);

	while (array[end] < value && start < (int) size)
	{
		start = end;
		end = end + sqrt(size);

		printf("Value checked array[%d] = [%d]\n", start, array[start]);

		if (end > (int) (size - 1))
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", start, end);

	if (end < (int) (size - 1))
	{
		for (i = start; i <= end; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	else
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
	}
	return (-1);
}
