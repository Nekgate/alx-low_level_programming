#include "main.h"

/**
*_memcpy - This program copies memory area
*@dest: where memory is stored
*@src: source where memory is copied
*@n: number of bytes
*Return: memory copied
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
