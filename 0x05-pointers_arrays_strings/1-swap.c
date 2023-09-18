#include "main.h"

/**
*swap_int - Swap two integers
*@a: value 1
*@b: value 2
*Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
