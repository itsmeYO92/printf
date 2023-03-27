#include "main.h"

/**
 * p_string - print a string to the stdio
 * @args: string to print
 * Return: number of bytes printed
*/

int p_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	return (write(1, str, _strlen(str)));
}

/**
 * p_String - print a string to the stdio
 * @args: string to print
 * Return: number of bytes printed
*/

int p_String(va_list args)
{
	int count = 0, i;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			count += write(1, "\\x0", 3);
			count += print_hex(1, (unsigned int)str[i]);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}

