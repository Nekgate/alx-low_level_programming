#include "main.h"

/**
*set_bit - This program sets a bit at a given index to 1
*@n: pointer to the number to change
*@index: index of the bit to set to 1
*Return: 1 for success and -1 for failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	 unsigned long int cover = 1UL << index;

	if (index >= sizeof(unsigned long) * 8 || n == NULL)
	{
		return (-1);
	}

	*n = *n | cover;
	return (1);
}
