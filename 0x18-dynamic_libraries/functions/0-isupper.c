#include "main.h"

/**
*_isupper - checking lowercase character
*@c:The character to be checked
*Return: 1 for uppercase case character or 0 anything else
*/

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
