#include "main.h"

/**
*print_sign - Print the sign of a number
*@n: The number to check
*Return: ! for positive num, -1 for negative num or zero anything
*/

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
