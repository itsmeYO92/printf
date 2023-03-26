#include "main.h"

/**
 * p_char - print a charachter
 * @args: char to print
 * Return: number of byte printed
*/

int p_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}
