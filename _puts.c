#include "main.h"

/**
* _puts - print strings
* @str: the string
* Return: void
*/
int _puts(char *str)
{
char * a = str;
while(*str)
_putchar(*str++);
return (str - a);
}

/**
* _putchar - write char to stdout
* @c: the char
* Return: on success 1, on error - 1
*/
int _putchar(int c)
{
static int i;
static char buf(OUTPUT_BUF _SIZE)
if (c == BUF-FLUSH || i>=
OUTPUT_BUF_SIZE)
{
write (1, buf, I);
i = 0;
}
if (c != BUF _FLUSH)
buf[i++] = c;
return (i);
}
