#include "main.h"

/**
 * p_dec - print an int to stdio in decimal using (%u)
 * @args: number to print
 * Return: number of bytes printed
 */
int p_dec(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int index = 0, i;
	char bin_array[32];

	if (num == 0)
		return (write(1, "0", 1));

	while (num > 0)
	{
		bin_array[index] = (num % 10) + '0';
		num = num / 10;
		index++;
	}

	for (i = index - 1; i >= 0; i--)
		write(1, &bin_array[i], 1);

	return (index);
}
