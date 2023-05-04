#include "main.h"
/**
 * flip_bits - flipping changes from one to another
 * @n: first int
 * @m: second int
 *
 * Return: the bit num we need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, outco;
	unsigned int x, y;

	x = 0;
	outco = 1;
	diff = n ^ m;
	for (y = 0; y < (sizeof(unsigned long int) * 8); y++)
	{
		if (outco == (diff & outco))
			{
			x++;
			}
		outco <<= 1;
	}

	return (x);
}
