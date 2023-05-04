#include "main.h"

/**
 * set_bit - index value of a bit to 1
 * @index: from 0 to the bit of interest
 * @n: potr for int i
 *
 * Return: 1 for success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	b = 1 << index;
	*n = *n | b;

	return (1);
}
