#include "main.h"



/**
 * _printf - variadic function to print (simillar to printf)
 * @format: list of types
 * Return: nothing
*/

int _printf(const char * const format, ...)
{
	int n_bytes =  0;
	int j;
	va_list pars;
	int (*f)(va_list);

	if (!format || (format[0] == '%' && format[1] == '\0')) /* If format is NULL*/
		return (-1);

	va_start(pars, format);
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] == '%')
		{
			if (format[j + 1] != '%')
			{
				f = get(format[j + 1]);
				if (f == NULL)
				{
					write(1, &format[j], 1);
					n_bytes++;
				}
				else
				{
					n_bytes += f(pars);
					j++;
				}
			}
		}
		else
		{
			write(1, &format[j], 1);
			n_bytes++;
		}

	}
	va_end(pars);
	return (n_bytes);
}
