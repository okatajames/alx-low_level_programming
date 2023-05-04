#include "main.h"

/**
 * binary_to_uint - Converts binary num to unsigned integer
 * @b: Ptr to strh of 0 and 1 chars
 *
 * Return: returns a converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}

	for (x = 0; b[x] != '\0'; x++)
	{
		n <<= 1;
		if (b[x] == '1')
			n += 1;
	}

	return (n);
}
