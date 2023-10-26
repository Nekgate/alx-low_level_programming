#include "main.h"
#include <unistd.h>

/**
*print_binary - This function prints binary representation of number
*@n: Th number to print in binary
*/

void print_binary(unsigned long int n)
{
	unsigned long int cover = 1UL << 63;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}

	while ((cover & n) == 0)
	{
		cover >>= 1;
	}

	while (cover != 0)
	{
		char bit = ((cover & n) == 0) ? '0' : '1';

		write(1, &bit, 1);
		cover >>= 1;
	}
}
