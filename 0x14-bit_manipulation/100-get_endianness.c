#include "main.h"
/**
 * get_endianness - check for endianness
 *
 * Return: 0 for big endian, 1 for little/ small endian values
 */

int get_endianness(void)
{
	int x = 1;
	char *cha;

	cha = (char *)&x;

	return (*cha);
}
