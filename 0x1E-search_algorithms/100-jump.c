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
        size_t l = 0, r = sqrt(size), i = l;

        if (array == NULL)
                return (-1);

        while (array[r] < value && l <= size)
        {
                if (l == 0)
                        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
                l = r;
                r = r + sqrt(size);

                printf("Value checked array[%ld] = [%d]\n", l, array[l]);

                if (r > (size - 1))
                        break;
        }

        printf("Value found between indexes [%ld] and [%ld]\n", l, r);

        if (r < (size - 1))
        {
                for (i = l; i <= r; i++)
                {
                        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
                        if (array[i] == value)
                                return (i);
                }
        }
        else
        {
                printf("Value checked array[%ld] = [%d]\n", l, array[l]);
        }
        return (-1);
}
