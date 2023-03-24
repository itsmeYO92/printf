#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
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

#endif
