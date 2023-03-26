#include "main.h"

/**
* p_int - print integers
* @x: integer to print
* Return: number of byte printed
**/
int p_int(va_list x)
{
	int i = 1, j, divi = 1, n = va_arg(x, int), nn = 0;
	unsigned int m = n;
	unsigned int bck = n;

	if (n >= 0 && n <= 9)
		_putchar('0' + n);
	else if (n < 0 && n >= -9)
	{
		n = -n;
		i++;
		_putchar('-');
		_putchar('0' + n);
	}
	else
	{
		if (n <= -10)
		{
			n = -n, nn = 1;
			_putchar('-');
			bck = n;
			m = n;
		}
		while (m >= 10)
		{
			m = m / 10;
			i++;
		}
		for (j = i; j > 1; j--)
			divi = divi * 10;
		for (j = 1; j <= i; j++)
		{
			m = bck / divi;
			bck = bck - (m * divi);
			divi = divi / 10;
			_putchar('0' + m);
		}
	}
	if (nn == 1)
		return (i + 1);
	return (i);
}

