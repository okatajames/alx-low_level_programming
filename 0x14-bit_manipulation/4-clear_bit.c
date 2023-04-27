#include "main.h"

/**
 * clear_bit - at index, resets the val of bit to 0
 * @n: num z
 * @index: 0 to bit of interest
 *
 * Return: 1 for success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		{
		return (-1);
		}
	z = ~(1 << index);
	*n = *n & z;

	return (1);
}
