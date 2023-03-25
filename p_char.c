#include "main.h"

/**
 * p_char - print a charachter
 * @args: char to print
 * Return: nothing
*/

void p_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
}
