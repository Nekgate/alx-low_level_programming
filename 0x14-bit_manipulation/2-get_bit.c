#include "main.h"

/**
*get_bit - This function returns the value of a bit at a given index
*@n: number to search
*@index: index of the bit
*Return: value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int cover = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (n & cover);
}
