#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 *                 the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
 *         It returns -1 If value is not present in array or
 *         if array is NULL
 */

int linear_search(int *array, size_t size, int value){


        int i, foundIndex = 0, retIndex;

        if (array == NULL) return -1;


        for (i = 0; i < ((int) size); i++){

                printf("Value checked array[%d] = [%d]\n", i, array[i]);

                if(array[i] == value){
                        foundIndex = 1;
                        retIndex = i;
                        break;
                }
        }
        if (foundIndex)
            return retIndex;
        else
            return -1;


}
