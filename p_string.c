#include "main.h"

/**
 * p_string - print a string to the stdio
 * @args: string to print
 * return - nothing
*/

void p_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";

	write(1, str, _strlen(str));
}
