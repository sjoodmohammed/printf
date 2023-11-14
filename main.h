#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#define NULL_STRING "(null)"

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2

typedef struct parameters
{
unsigned int unsign  : 1 ;
unsigned int plus_flag  : 1 ;
unsigned int space_flag  : 1 ;
unsigned int hashtag_flag  : 1 ;
unsigned int zero_flag  : 1 ;
unsigned int minus_flag  : 1 ;
unsigned int width ;
unsigned int precision ;
unsigned int h_modifier ;
unsigned int l_modifier ;
} params_t ;

typedef struct specifier
{
char* specifier;
int (*f)(va_list, params_t *) ;
} specifier_t ;

/*_puts. C*/
int _puts(char *str);
int _putchar(int c);

/* print_function.c */
int print_s(va_list vals , params_t *params);
int print_percent(va_list vals , params_t *params);
int print_string(va_list vals , params_t *params);
int print_char(va_list vals , params_t *params);
int print_int(va_list vals , params_t *params);

/*number.c*/
char *convert(long int num, int base, int flags, params_t *params) ;
int print_unsigned(va_list vals, params_t *params) ;
int print_address(va_list vals, params_t *params) ;

/*specifiers.c*/
int (*get_specifier(char *s)) (va_list vals, params_t *params);
int get_print_func(char *s, va_list vals, params_t *params);
int get_flag(char *s, params_t *params);
int get_modifier(char *s, params_t *params);
char *get_width(char *s, params_t *params, va_list vals);

/* convert number.c*/
int print_hex(va_list vals, params_t *params);
int print_HEX(va_list vals, params_t *params);
int print_binary(va_list vals, params_t *params);
int print_octal(va_list vals, params_t *params);

/* simple_printers.c*/
int print_from_to(char *start, char *stop, char *except) ;
int print_rev(va_list vals, params_t *params);
int print_rot13(va_list vals, params_t *params);
/*print_number.c*/
int _isdigit(int c) ;
int _strlen(char *s) ;
int print_number(char *str, params_t *params) ;
int print_number_right_shift(char *str, params_t *params) ;
int print_number_left_shift(char *str, params_t *params) ;

/*params.c*/
void init_params(params_t *params, va_list vals) ;
/*string_fields.c*/
char *get_precision(char *p, params_t *params, va_list vals);
 /*_printf.c*/
int _printf(const char *format, ...);

#endif
