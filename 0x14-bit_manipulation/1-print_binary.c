#include "main.h"
/**
 * _power - Calculates the base and power of a given int
 * @base: base of exp
 * @pow: power of exp
 *
 * Return: value base & pow
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
 * print_binary - bin rep of a num
 * @n: integ of printed num
 *
 * Return: returns void
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
