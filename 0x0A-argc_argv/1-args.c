#include <stdio.h>

/**
*main - This program prints arguments
*a@argc: Arguments count
*@argv: Arguments vector
*Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
