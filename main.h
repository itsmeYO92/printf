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
int p_int(va_list args);
int p_binary(va_list args);
int _putchar(char c);
int p_octal(va_list args);
int p_hex(va_list args);
int p_HEX(va_list args);
int print_hex(int isUpper, unsigned int num);
#endif
