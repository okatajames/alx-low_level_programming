#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int m = 0;
	if (!b)
		return (0);
	for (z = 0; b[z] != '\0'; z++)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
	}
	for (z = 0; b[z] != '\0'; z++)
	{
		m <<= 1;
		if (b[z] == '1')
			m += 1;
	}
	return (m);
}
