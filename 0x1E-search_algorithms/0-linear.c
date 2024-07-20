#include <stdio.h>

/**
 * linear_serch - this function search for a value in an array of integer
 * @array: pointer to the first elem
 * @size: the size of the array
 * @value: valu to be search
 * Return: searched value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
