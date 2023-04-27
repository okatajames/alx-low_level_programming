#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 *
 * Return: value of base and power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int integ = 1;
	unsigned int z;

	for (z = 1; z <= pow; z++)
		{
		integ *= base;
		}

	return (integ);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: integ of prented
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char ident = 0;

	dev = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			ident = 1;
			_putchar('1');

		}
		else if (ident == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
