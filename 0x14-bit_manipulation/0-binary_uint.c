#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *x)
{
	int y;
	unsigned int num;

	num = 0;
	if (!x)
		return (0);
	for (y = 0; x[y] != '\0'; y++)
	{
		if (x[y] != '0' && x[y] != '1')
			return (0);
	}
	for (y = 0; x[y] != '\0'; y++)
	{
		num <<= 1;
		if (x[y] == '1')
			num += 1;
	}
	return (num);
}

