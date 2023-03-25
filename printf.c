#include "main.h"



/**
 * _printf - variadic function to print (simillar to printf)
 * @format: list of types
 * Return: nothing
*/

void _printf(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	va_list pars;
	operation_t ops[] = {
		{"c", p_char},
		{"s", p_string},
		{NULL, NULL}
	};

	va_start(pars, format);
	while (format && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			i = 0;
			while (ops[i].op)
			{
				if (*(ops[i].op) == format[j + 1])
				{
					ops[i].f(pars);
					j++;
				}
				i++;
			}
		}
		else
			write(1, &format[j], 1);
		j++;
	}




	va_end(pars);

}
