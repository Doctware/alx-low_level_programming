#include <stdio.h>

/**
 * print_array - print the elem of an array
 * @array: the array to print
 * @low: the starting idx
 * @high: the ending of idx
 */

void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching for array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - this function search for a value
 * in a sorted array using Binary searh
 * @array: pointing to the first elem
 * @size: the size of an array
 * @value: the value to be search
 * Return: value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
