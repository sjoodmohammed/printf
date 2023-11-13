#include "main.h"

/**
* _printf - printf function
* @format: the formated string
* return: number of bytes
*/

int _printf(const char *format, ...)
{
	int sum = 0;
	va_list vals;
	char *p, *start;
	params_t params = PARAMS_INIT;
	
	va_start (vals, format);
	
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[i] == ' ' && !format[2])
		return (-1);
	for (p = (char *)format; *p; p++ )
	{
		init_params(&params, vals);
		if(*p != '%')
		{
			sum += _putchar(*p);
			continue;
		}
		start = p;
		p++;
		while (get_flag(p, &params))
		{
			p++;
		}
		p = get_width(p, &params, vals);
		p = get_precision(p, &params, vals);
		if (get_modifier(p, params))
			p++;
		if (!get_specifier(p))
			sum += print_from_to(start, p, params.l_modifier ||
			params.h_modofier ? p - 1 : 0);
		else
			sum += get_print_func(p, vals, &params);
	}
	_putchar(BUF_FLUSH);
	va_end vals;
	return(sum);
}
