#include "main.h"

/**
*_strchr - Entry point
*@s: parameter1 for input
*@c: parameter2 for input
*Return: it returns 0
*/

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
