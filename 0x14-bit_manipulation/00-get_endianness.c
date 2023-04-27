#include "main.h"
/**
 * get_endianness - check for endianness
 * Return: 0 for big endian, 1 for little/ small endian values
 */

int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *)&i;

	return (*c);
}
