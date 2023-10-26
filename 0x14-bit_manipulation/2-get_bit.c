#include "main.h"

/**
*get_bit - This function returns the value of a bit at a given index
*@n: number to search
*@index: index of the bit
*Return: value
*/

int get_bit(unsigned long int n, unsigned int index)
{

	int bit_num;

	if (index > 63)
		return (-1);

	bit_num = (n >> index) & 1;

	return (bit_num);
}
