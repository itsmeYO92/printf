#include "main.h"

/**
 * p_binary - print an int to stdio in binary using (%b)
 * @args: number to print
 * Return: number of bytes returned
 */
int p_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int index = 0, i;
	char bin_array[32];

	if (num == 0)
		return (write(1, "0", 1));

	while (num > 0)
	{
		bin_array[index] = (num % 2) + '0';
		num = num / 2;
		index++;
	}

	for (i = index - 1; i >= 0; i--)
		write(1, &bin_array[i], 1);

	return (index);
}

