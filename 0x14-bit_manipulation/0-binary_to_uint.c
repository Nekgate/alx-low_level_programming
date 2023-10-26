#include "main.h"

/**
*binary_to_uint - This function converts binary number to an unsigned int
*@b: String with the binary number
*Return: 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int display = 0;

	if (b == NULL)
	return (0);

	while (*b != '\0')
	{
	if (*b != '0' && *b != '1')
	{
		return (0);
	}
	display = (display << 1) + (*b - '0');
	b++;
	}

	return (display);
}
