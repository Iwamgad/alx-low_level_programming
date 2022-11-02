#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers using
 *                 the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
 *         It returns -1 If value is not present in array or
 *         if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	int l, r, pos;

	l = 0;
	r = (int) (size - 1);

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		pos = l + ((value - array[l]) / (array[r] - array[l])) * (r - l);
		if (pos >= (int) size)
		{
			printf("Value checked array[%d] is out of range \n", pos);
			return (-1);
		}
		if (array[pos] == value)
		{
			printf("Value checked array[%d] = [%d]\n", l, array[l]);
			return (pos);
		}
		else if (array[pos] > value)
			r = pos - 1;
		else
			l = pos + 1;

	}
	return (-1);
}
