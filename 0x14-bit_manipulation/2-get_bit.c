#include "main.h"

/**
 * get_bit - give us the value of bit a index x
 * @n: check the bits
 * @index: index to check bits
 *
 * Return: index bit val
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, product;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		{
		return (-1);
		}
	divisor = 1 << index;
	product = n & divisor;
	if (product == divisor)
		{
		return (1);
		}

	return (0);
}
