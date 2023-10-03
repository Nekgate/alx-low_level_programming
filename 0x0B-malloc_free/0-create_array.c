#include "main.h"

/**
*create_array - This program creates an array of chars
*@size: Size of array
*@c: Character to store in array
*Return: Pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
