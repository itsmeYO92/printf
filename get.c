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
