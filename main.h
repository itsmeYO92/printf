#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
/**
 * struct operation - Struct format
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct operation
{
	char *op;
	ssize_t (*f)(va_list arg);
} operation_t;

int _printf(const char * const format, ...);
ssize_t p_char(va_list args);
int _strlen(char *s);
ssize_t p_string(va_list args);

#endif
