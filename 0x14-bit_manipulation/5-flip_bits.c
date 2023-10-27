#include "main.h"

/**
 * flip_bits - This function counts the number of bits to change
 * to get from one number to another
 * @n: The first number
 * @m: The second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int flow;
	unsigned long int spec = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		flow = spec >> i;
		if (flow & 1)
			count++;
	}

	return (count);
}
