#include "main.h"
/**
 * get - Used to point to a specific format print function.
 *
 * @tipo: char represent a format.
 * @ va_list: Represnet the argument that we wanna print.
 *
 * Return: NULL if failed.
 */
int (*get(char tipo))(va_list)
{
	int i;
	operation_t opt[] = {
		{'c', p_char},
		{'s', p_string},
		{'b', p_binary},
		{'i', p_int},
		{'d', p_int},
		{'o', p_octal},
		{'x', p_hex},
		{'X', p_HEX},
		{'p', p_pointer},
		{'u', p_dec},
		{'S', p_String},
		{'\0', NULL}
	};

	for (i = 0; opt[i].type; i++)
	{
		if (tipo == opt[i].type)
		{
			return (opt[i].f);
		}
	}
	return (NULL);
}
