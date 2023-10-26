#include "main.h"

/**
 * clear_bit - This func sets value of bit to 0 at a given index
 * @n: pointer to the number to be changed
 * @index: index of the bit to set to 1
 * Return: 1 for success, -1 for failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cover = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	*n = *n & ~cover;
	return (-1);
}
