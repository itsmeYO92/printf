#include "main.h"

/**
 * print_hex - print an int to stdio in hex
 * @isUpper: if X is used = 1 if x is used = 0
 * @num: num to print
 * Return: number of bytes printed
 */
int print_hex(int isUpper, unsigned int num)
{
	int index = 0, i, step = 7, temp;
	char bin_array[32];

	if (num == 0)
		return (write(1, "0", 1));

	if (isUpper == 0)
		step = 39;

	while (num > 0)
	{
		temp = (num % 16) + '0';
		bin_array[index] = temp > '9' ? temp + step : temp;
		num = num / 16;
		index++;
	}

	for (i = index - 1; i >= 0; i--)
		write(1, &bin_array[i], 1);

	return (index);
}



/**
 * p_hex - print an int to stdio in hex (%x)
 * @args: num to print
 * Return: number of bytes printed
 */
int p_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_hex(0, num));
}


/**
 * p_HEX - print an int to stdio in hex (%X)
 * @args: num to print
 * Return: number of bytes printed
 */
int p_HEX(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_hex(1, num));
}
