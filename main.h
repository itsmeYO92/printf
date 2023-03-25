#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
/**
 * struct format - Struct format
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct operation
{
	char *op;
	void (*f)(va_list arg);
} operation_t;

void _printf(const char * const format, ...);
void p_char(va_list args);
int _strlen(char *s);
void p_string(va_list args);

#endif
