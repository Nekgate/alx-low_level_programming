#include "main.h"

/**
*_strncpy - This function copies a string
*@dest: destination of string
*@src: source of string
*@n: number of byte to copy
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
