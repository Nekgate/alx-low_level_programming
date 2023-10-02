#include <stdio.h>

/**
*main - This program prints the number of arguments passed into it
*a@argc: Arguments count
*@argv: Arguments vector
*Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
