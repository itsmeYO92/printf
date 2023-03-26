#include "main.h"

/**
 * p_string - print a string to the stdio
 * @args: string to print
 * Return - number of bytes printed
*/

ssize_t p_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		return (-1);

	return (write(1, str, _strlen(str)));
}
