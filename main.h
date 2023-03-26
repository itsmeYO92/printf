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
	char type;
	int (*f)(va_list arg);
} operation_t;
int (*get(char tipo))(va_list);
int _printf(const char * const format, ...);
int p_char(va_list args);
int _strlen(char *s);
int p_string(va_list args);

#endif
