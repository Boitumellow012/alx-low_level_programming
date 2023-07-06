#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @binary_str: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *binary_str)
{
	int index;
	unsigned int dec_val = 0;

	if (!binary_str)
		return (0);

	for (index = 0; binary_str[index]; index++)
	{
		if (binary_str[index] < '0' || binary_str[index] > '1')
			return (0);
		dec_val = 2 * dec_val + (binary_str[index] - '0');
	}

	return (dec_val);

}

