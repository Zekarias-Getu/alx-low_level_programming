#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list ap);
void print_int(char *separator, va_list ap);
void print_float(char *separator, va_list ap);
void print_char_ptr(char *separator, va_list ap);

/**
* struct format_types - Structure
* @type: value
* @f: pointer to function
*
* Description: structure for a dog
*/
typedef struct format_types
{
	char *type;
	void (*f)(char *separator, va_list ap);
/**
* @type: pointer to a value
* @age: value with an float
*
Description: This structure is for a class dog
*/
} f_dt;
#endif /* _MAIN_H_*/
