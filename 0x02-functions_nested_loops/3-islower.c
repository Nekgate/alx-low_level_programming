#include "main.h"

/**
*_islower - Check for lowercase
*@c: The character to check
*Return: 1 for lowercase charcter or 0 for anything
*/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
