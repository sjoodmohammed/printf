#include "main.h"
#include <stdarg.h>
/**
 * print_int - print the integer
 * @vals: The string format list
 * @params: the argument parameter.
 * Return: On percent
 */
int print_int(va_list vals, params_t *params)
{
	long int l;
	
	if (params->l_modifier)
		l = va_arg(vals, long int);
	else if (params->h_modifier)
		l = (short int)va_arg(vals, int);
	else
		l = (int)va_arg(vals, int);
	return (print_number(convert(l, 10, 0,params),params));

}

/**
 * print_percent - print the percent
 * @vals: The string format list
 *
 * Return: On percent
 */
int print_percent(va_list vals, params_t *params)
{
	(void)vals;
	(void)params;

	return (_putchar('%'));
}

/**
 * print_char - print the percent
 * @vals: The string format list
 * @params: the argument parameter.
 * Return: On percent
 */
int print_char(va_list vals, params_t *params)
{
	char pad_char = ' ';
	unsigned int pad = 1, sum = 0, ch = va_arg(vals, int);
	
	if (params->minus_flag)
		sum += _putchar(ch);
	while (pad++ < params->width)
		sum += _putchar(pad_char);
	if (!params->minus_flag)
		sum += _putchar(ch);
	return (sum);
}

/**
 * print_s - print the percent
 * @vals: The string format list
 * @params: the argument parameter.
 * Return: the number of bytes
 */
int print_s(va_list vals, params_t *params)
{
	 char *str = va_arg(vals, char *);
	 char *hex;
	 int sum = 0;
	 
	if ((int)(!str))
		return (_puts(NULL_STRING));
	for (; *str; str++)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			sum += _putchar('\\');
			sum += _putchar('x');
			hex = convert(*str, 16, 0,params);
			if (!hex[1])
				sum += _putchar('0');
			sum += _puts(hex);

  		}
  		else
  		{
			sum += _putchar(*str);
		}
	}
	return (sum);
}

/**
 * print_string - print the string
 * @vals: The string format list
 * @params: the argument parameter.
 * Return: the numer of bytes
 */
int print_string(va_list vals, params_t *params)
{
	char* str = va_arg(vals, char *), pad_char = ' ';
	unsigned int pad = 0, sum = 0, i = 0, j;
	
	(void)params;
	switch ((int)(!str))
		case 1:
			str = NULL_STRING;
		j = pad = _strlen(str);
		if (params->precision < pad)
			j = pad = params->precision;
			
		if (params->minus_flag)
		{
			if (params->precision != UINT_MAX)
				for (i = 0; i < pad; i++)
					sum +=_putchar(*str++);
			else
					sum +=_puts(str);
		}
		while (j++ < params->width)
			sum += _putchar(pad_char);
		if (!params->minus_flag)
		{
			if (params->precision != UINT_MAX)
				for (i = 0; i < pad; i++)
					sum +=_putchar(*str++);
			else
					sum +=_puts(str);
		}
		return (sum);
}
