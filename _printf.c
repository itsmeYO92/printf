#include "main.h"



/**
 * _printf - variadic function to print (simillar to printf)
 * @format: list of types
 * Return: nothing
*/

int _printf(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	int checker, notfound;
	ssize_t nob =  0;
	va_list pars;
	operation_t ops[] = {
		{"c", p_char},
		{"s", p_string},
		{NULL, NULL}
	};

	if (!format)
		return (-1);

	va_start(pars, format);
	while (format && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			i = 0;
			notfound = 1;
			while (ops[i].op)
			{
				if (*(ops[i].op) == format[j + 1])
				{
					checker = ops[i].f(pars);
					if (checker == (-1))
						return (-1);
					nob += checker;
					j++;
					notfound = 0;
				}
				i++;
			}
			if (notfound == 1)
			{
				nob += write(1, "%", 1);
				j++;
			}
		}
		else
			nob += write(1, &format[j], 1);
		j++;
	}




	va_end(pars);
	return (nob);

}
