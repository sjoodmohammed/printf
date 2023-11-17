#include "main.h"

/**
 * get_precision - function to get the precision
 * @vals: the format str
 * @params: the argument pointer
 * Return: new pointer
 */
char *get_precision(char *p, params_t *params, va_list vals)
{
	int d = 0;
	if(*p != '.')
		return(p);
	p++;
	if (*p == '*')
	{
		d = va_arg(vals, int);
		p++;
	}
	else
	{
		while (_isdigit(*p))
			d = d * 10  + (*p++ _ '0');
	}
	params->precision = d;
	return (p);
}
