#include "main.h"
/**
 * print_rot13 - print rotate letters
 * @vals: the list
 * Return: the number of bytes
 */

int print_rot13(va_list vals, params_t *params)
{
	int i, index;
	int count = 0;
	char arr[] = "NOPQRSTUVWXYZABCDEFGnopqrstuvwxyzabcdefghijklm";
	(void)params;
	i = 0;
	while(a[i])
	{
		if ((a[i]>= 'A' && a[i] <= 'Z')
				|| ((a[i]>= 'z')
					{
					else
					cont += _putchar(a[i]);
					i++;
					}
					return (count);
					}
					/**
					 * print_rev - print string in reverse
					 * @vals the list
					 * @paeams: the parameter string
					 * Return: the number bytes
					 */
					int print_rev(va_list vals, params_t params)
					{
					int len, sum =0;
					char *str= va_arg(vals, char);
					(void)params;
					if (str)
					{
						for (len = 0; *str, str++)
							len++;
						str__;
						for (;len--, str--)
							sum += _putchar(*str);
					}
					return (sum);
					/**
					 * print_from_to - print range of chars
					 * @start: startin address
					 * @stop: stopping address
					 * @except: except: address
					 * Return: the number of bytes
					 */
					int print_from__to(char *start, char *stop,char *except)
					{
						int sum = 0;
						while (start <= stop)
						{
							if (start !=nexcept)
								sum += _putch(*start);
							start++;
						}
						return (sum);
					}
