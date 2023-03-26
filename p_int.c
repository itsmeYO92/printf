#include "main.h"

/**
 * p_char - print a charachter
 * @args: char to print
 * Return: number of byte printed
*/
int print_number(int n)
{
	int count = 0;
	if (n < 0)
	{
		count +=_putchar('-');
		if (n >= -9)
			count +=_putchar(-1 * n + '0');
		else
		{
			print_number(-1 * (n / 10));
			count +=_putchar(-1 * (n % 10) + '0');
		}
	}
	else
	{
		if (n  < 10)
			count +=_putchar(n + '0');
		else
		{
			print_number(n / 10);
			count +=_putchar(n % 10 + '0');
		}
	}
	return (count);
}

int p_int(va_list args)
{
	int n = va_arg(args, int);
	return (print_number(n));
}

