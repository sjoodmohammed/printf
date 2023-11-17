#include "main.h"
#include <stdarg.h>

/**
*get_specifier - function to get the specifier
*@s: the string
*Return: the number of bytes.
*/

int (*get_specifier(char *s)) (va_list vals, params_t *params)
{
specifier_t  specifiers[] = {
{"c", print_char},
{"d", print_int},
{"i", print_int},
{"s", print_string},
{"%", print_percent},
{"b", print_binary},
{"o", print_octal},
{"u", print_unsigned},
{"x", print_HEX},
{"p", print_address},
{"s", print_s},
{"r", print_rev},
{"h", print_rot13},
{NULL,  NULL},
} ;
int i = 0 ;
while (specifiers[i].specifier)
{
if (*s == specifiers[i].specifier[0])
{
return (specifiers[i].f);
}
i++;
}
return (NULL);
}
/**
* get_flag - function to get the flag
* @params: the parameter
* Return: the number of bytes.
*/
int get_flag(char *s, params_t *params)
{
int i = 0;
switch (*s)
{
case '+' :
i = params -> plus_flag = i;
break;
case ' ' :
i = params -> space_flag = i;
break;
case '#' :
i = params -> hashtag_flag = i;
break;
case '-' :
i = params -> minus_flag = i;
break;
case '0' :
i = params -> zero_flag = i;
break;
}
return (i);
}
/**
* get_modifier - function to get the modifier
* @s: the string
* Return: the number of bytes .
*/
int get_modifier(char *s, params_t *params)
{
int i = 0;
switch(*s)
{
case 'h' :
i = params -> h_modifier = i;
break;
case 'l' :
i = params -> l_modifier = i;
break;
}
return (i);
}
/**
* get_width - function to get the width
* @vals: the list
* @s: the string
* Return: the number of bytes .
*/
char *get_width(char *s, params_t *params, va_list vals)
{
int d = 0;
if (*s == '*')
{
d = va_arg(vals, int);
s++;
}
else
{
while (_isdigit(*s))
    d = d * 10 + (*s++ - '0');
}
params -> width = d;
return (s);
}
