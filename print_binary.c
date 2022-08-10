#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed in binary
 * @printed: hold the number of characters printed
 */

void print_binary(unsigned int n, unsigned int *printed)
{
	if  (n > 0)
	{
		*printed += 1;
		print_binary(n >> 1, printed);
	}
	_putchar((n & 1) + '0');
}
