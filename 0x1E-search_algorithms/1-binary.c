#include "search_algos.h"

/**
 * binary_search - This searches for a value in a sorted array
 * @array: The Pointer to the array to search for
 * @size:  Size of the array
 * @value: The target value to search for
 * Return: The target value index else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = size - 1;
	int mid;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid < value])
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
